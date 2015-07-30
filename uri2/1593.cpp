#include <bits/stdc++.h>

using namespace std;

bool isZero(string s){
	for (int i = 0; i < s.size(); ++i)
		if(s[i] != '0')
			return false;

	return true;
}


string divide(string s){
	int n = 0;

	for (int i = 0; i < s.size(); ++i){
		n = n * 10 + s[i] - '0';
		if(n < 2)
			s[i] = '0';
		else
			s[i] = '0' + n/2;
		
		n = n % 2;
	}

	return s;
}

int bits(string s){
	int b = 0;

	while(!isZero(s)){
		b += s[s.size()-1] % 2;
		s = divide(s);
	}

	return b;
}


int main(){
	int n;
	string s;

	cin >> n;

	while(n--){
		cin >> s;
		cout << bits(s) << endl;
	}
}

