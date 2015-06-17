# -*- coding: utf-8 -*-
import re
import os
import requests
import time
import sys, getopt
from getpass import getpass

class Uri():
	def __init__(self, problem_id):
		# VARS

		self.getUser()

		self.run_problem_id  = problem_id
		self.run_language_id = "2"			#cpp
		self.run_source_code = ""

		self.url_home   = "https://www.urionlinejudge.com.br"
		self.url_login  = "https://www.urionlinejudge.com.br/judge/login"
		self.url_submit = "https://www.urionlinejudge.com.br/judge/runs/add"
		self.url_runs   = "https://www.urionlinejudge.com.br/judge/runs"
		self.url_submissions = "https://www.urionlinejudge.com.br/judge/en/runs"

		self.s = requests.Session()
		self.loadCode()

	def getUser(self):
		self.user_email    = self.getEmail()
		self.user_password = self.getPassword()
		try:
			pass
			#self.testLogin()
		except:
			self.getUser()


	def getEmail(self):
		try:
			f = open("./user_email", "r");
			email = f.read()
			email = email.decode('base64', 'strict')
		except:
			email = raw_input("Type your e-mail: ")
			f = open("./user_email", "w")
			f.write(email.encode('base64','strict'))
			f.close()

		return email

	def getPassword(self):
		try:
			f = open("./user_psw", "r+");
			psw = f.read()
			psw = psw.decode('base64', 'strict')
		except:
			psw = getpass("Type your password: ")
			f = open("./user_psw", "w+")
			f.write(psw.encode('base64','strict'))
			f.close()

		return psw

	def login(self):
		r = self.s.get(self.url_home)

		self.getToken(r.text, 'fields')
		self.getToken(r.text, 'key')

		self.s.post(self.url_login, data={"data[User][email]"    : self.user_email,
							  		      "data[User][password]" : self.user_password, 
								          "data[_Token][key]"    : self.token_key,
								          "data[_Token][fields]" : self.token_fields,
								          "data[_Token][unlocked]" : ""
								         })

	def submit(self):
		r = self.s.get(self.url_submit)

		self.getToken(r.text, 'fields')
		self.getToken(r.text, 'key')

		r = self.s.post(self.url_submit, data={"data[_Token][key]"      : self.token_key,
							   	        	   "data[_Token][fields]"   : self.token_fields,
									           "data[_Token][unlocked]" : "",
								   	           "data[Run][problem_id]"  : self.run_problem_id,
								   	           "data[Run][language_id]" : self.run_language_id,
								   	           "data[Run][source_code]" : self.run_source_code
									          })

	def getStatus(self):
		r = self.s.get(self.url_submissions)

		self.getToken(r.text, 'fields')
		self.getToken(r.text, 'key')

		r = self.s.post(self.url_runs, data={"data[_Token][key]"      : self.token_key,
									   	     "data[_Token][fields]"   : self.token_fields,
										     "data[_Token][unlocked]" : "",
									   	     "data[filter][problem]"  : self.run_problem_id,
									   	     "data[filter][language]" : "",
									   	     "data[filter][answer]"   : ""
										    })
		
		#f = open('page.html', 'w+')
		#f.write(r.text.encode('utf-8'))
		#f.close()

		regex = '\/judge\/runs/code\/[0-9]*">[a-zA-Z ]*'
		answer = re.findall(regex, r.text)
		print answer[1].split('>')[-1]

	def getToken(self, text, t):
		# makes a parse on the html response
		regex = '\[_Token\]\[' + t + '\]" value="[^"]*'
		token = re.search(regex, text)
		self.__dict__['token_' + t] = token.group(0).split('\"')[-1]

	def loadCode(self):		
		f = open(self.run_problem_id + '.cpp', 'r')
		self.run_source_code = f.read()
		f.close()
		

if __name__ == '__main__':

	uri = Uri(sys.argv[1].split('.')[0])
	uri.login()

	if(len(sys.argv) == 2):   # uri.py code.cpp
		uri.submit()
		print "Submited!"
		time.sleep(3)
		uri.getStatus()

	elif(len(sys.argv) == 3): # uri.py code.cpp -s
		for arg in sys.argv:
			if(arg == '-s'):
				uri.getStatus()
				
