#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main(){
	string s,temp;
	int ini,fim;
	map <string,int> dicio;
	map <string,int>::iterator palavra;

	while(getline(cin,s)){
		for (int i = 0; i < s.size(); ++i){
			//lower
			if((int)s[i] >= 65 && (int)s[i] <= 90)
				s[i] += 32;
			//especials chars
			if((int)s[i] < 97 || (int)s[i] > 122)
				s[i] = 32;
		}

		ini,fim = 0;

		while(1){
			ini = s.find_first_of("abcdefghijklmnopqrstuvxwyz",fim);
			fim = s.find_first_of(" ",ini);

			if(ini == -1)
				break;

			if(fim == -1)
				fim = s.size();

			temp = s.substr(ini,fim-ini);
			dicio[temp] = 1;
			temp.clear();
		}

	}
	
	for(palavra = dicio.begin(); palavra != dicio.end(); palavra++)
		cout << palavra->first << endl;
}