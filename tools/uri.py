# -*- coding: utf-8 -*-
import re
import os
import requests
import time
import sys
import getopt
from getpass import getpass
from bs4 import BeautifulSoup


class Uri():
    def __init__(self, problem_id):
        self.problem_id = problem_id
        self.language_id = "2"
        self.source_code = ""

        self.url_home = "https://www.urionlinejudge.com.br/judge/en/"
        self.url_login = "https://www.urionlinejudge.com.br/judge/en/login"
        self.url_submit = "https://www.urionlinejudge.com.br/judge/en/runs/add"
        self.url_submissions = "https://www.urionlinejudge.com.br/judge/en/runs" + "?problem_id=" + problem_id

        self.session = requests.Session()

        self.getUser()

        while not self.login():
            self.deleteAccount()
            self.getUser()

    def deleteAccount(self):
        os.remove('./user_email')
        os.remove('./user_psw')

    def getUser(self):
        self.user_email = self.getEmail()
        self.user_password = self.getPassword()

    def getEmail(self):
        try:
            f = open("./user_email", "r")
            email = f.read()
            email = email.decode('base64', 'strict')
        except:
            email = raw_input("Type your e-mail: ")
            f = open("./user_email", "w")
            f.write(email.encode('base64', 'strict'))
            f.close()

        return email

    def getPassword(self):
        try:
            f = open("./user_psw", "r+")
            psw = f.read()
            psw = psw.decode('base64', 'strict')
        except:
            psw = getpass("Type your password: ")
            f = open("./user_psw", "w+")
            f.write(psw.encode('base64', 'strict'))
            f.close()

        return psw

    def login(self):
        self.page = self.session.get(self.url_home).text
        self.getParams()

        response = self.session.post(self.url_login, data={"email": self.user_email,
                                                           "password": self.user_password, 
                                                           "remember_me": '0',
                                                           "_method": 'POST',
                                                           "_csrfToken": self.csrfToken,
                                                           "_Token[fields]": self.tokenFields,
                                                           "_Token[unlocked]": "",
                                                           })

        if response.url == self.url_home:
            return True

    def submit(self):
        self.loadCode()

        self.page = self.session.get(self.url_submit).text
        self.getParams()

        response = self.session.post(self.url_submit, data={"_method": 'POST',
                                                            "_csrfToken": self.csrfToken,
                                                            "problem_id": self.problem_id,
                                                            "language_id": self.language_id,
                                                            "template": '1',
                                                            "source_code": self.source_code,
                                                            "_Token[fields]": self.tokenFields,
                                                            "_Token[unlocked]": "",
                                                            })

        print "Submited!"

    def getStatus(self):
        self.page = self.session.get(self.url_submissions).text
        soup = BeautifulSoup(self.page, 'html5lib')
        tbody = soup.find('tbody')
        tr = tbody.find('tr')
        try:
            td = tr.find_all('td')[3]
            return td.text.strip()
        except IndexError:
            return "You have not submitted any solutions yet!"

    def getParams(self):
        soup = BeautifulSoup(self.page, 'html5lib')
        self.csrfToken = soup.find('input', {'name': '_csrfToken'}).attrs['value']
        self.tokenFields = soup.find('input', {'name': '_Token[fields]'}).attrs['value']

    def loadCode(self):        
        f = open(self.problem_id + '.cpp', 'r')
        self.source_code = f.read()
        f.close()

if __name__ == '__main__':
    problem_id = sys.argv[1].split('.')[0]  # 1324.cpp
    uri = Uri(problem_id)

    if(len(sys.argv) == 2):  # uri.py code.cpp
        uri.submit()
        while True:
            response = uri.getStatus()
            print response
            if response == "- In queue -":
                time.sleep(1)
            else:
                break

    elif(len(sys.argv) == 3):  # uri.py code.cpp -s
        for arg in sys.argv:
            if(arg == '-s'):
                print uri.getStatus()
