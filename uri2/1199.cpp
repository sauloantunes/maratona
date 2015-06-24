#include <bits/stdc++.h>

using namespace std;

map<int, char> dh;

void init(){	
	dh[0] = '0';
	dh[1] = '1';
	dh[2] = '2';
	dh[3] = '3';
	dh[4] = '4';
	dh[5] = '5';
	dh[6] = '6';
	dh[7] = '7';
	dh[8] = '8';
	dh[9] = '9';
	dh[10] = 'A';
	dh[11] = 'B';
	dh[12] = 'C';
	dh[13] = 'D';
	dh[14] = 'E';
	dh[15] = 'F';
}

int mctoi(char c){
	if(c >= 'A' && c <= 'Z')
		return 10 + c - 'A';

	if(c >= 'a' && c <= 'z')
		return 10 + c - 'a';

	return c - '0';	
}

int mstoi(string s){
	int n = 0;
	reverse(s.begin(), s.end());

	for (int i = 0; i < s.size(); ++i)
		n += mctoi(s[i]) * pow(10,i);	

	return n;
}

void htod(string s){
	int n = 0;
	reverse(s.begin(), s.end());
	for (int i = 0; i < s.size(); ++i)
		n |= mctoi(s[i]) << 4*i;
	
	cout << n << endl;
}

void dtoh(string s){
	int n = mstoi(s);
	s.clear();

	int r = 0;
	int p = 15;


	for (int i = 0; i < 8; ++i){
		r = n & p;
		s.push_back(dh[r]);
		n = n >> 4;
	}

	reverse(s.begin(), s.end());

	int pos = 0;
	for (int i = 0; i < s.size() - 1; ++i){
		if(s[pos] != '0')
			break;
		pos++;
	}

	s = s.substr(pos);

	cout << "0x" << s << endl;

}

int main(){
	string s;
	int n;

	init();

	while(cin >> s, s != "-1"){
		if(s.size() > 2 && s[1] == 'x')
			htod(s.substr(2));
		else
			dtoh(s);
	}
}