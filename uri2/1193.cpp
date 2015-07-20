#include <bits/stdc++.h>

using namespace std;

unsigned int stoiD(string s){
	stringstream ss(s);
	unsigned int n;
	ss >> n;
	return n;
}

unsigned int stoiH(string s){
	stringstream ss(s);
	unsigned int n;
	ss >> hex >> n;
	return n;
}

void decHex(string num){
	cout << hex << stoiD(num);
}

void hexDec(string num){
	cout << dec << stoiH(num);
}

void binDec(string num){
	unsigned int n = 0;
	for (unsigned int i = 0; i < num.size(); ++i)
		if(num[i] == '1')
			n |= 1 << (num.size() -1 -i);
	
	cout << dec << n;
}

void decBin(string num){
	unsigned int n = stoiD(num);

	string s;
	for (int i = 31; i >= 0; --i)
		s += n & 1 << i ? "1" : "0";

	s.erase(s.begin(), s.begin() + s.find("1"));
	cout << s;
}

void binHex(string num){
	unsigned int n = 0;
	for (int i = 0; i < num.size(); ++i)
		if(num[i] == '1')
			n |= 1 << (num.size() -1 -i);
	
	cout << hex << n;
}

void hexBin(string num){
	unsigned int n = stoiH(num);
	stringstream ss;
	ss << n;
	ss >> num;
	decBin(num);
}


int main(){
	int n, cont=1;

	cin >> n;

	while(n--){
		string num, f;
		cin >> num >> f;

		cout << "Case " << dec << cont++ << ":" << endl;

		if(f == "dec"){
			decHex(num);
			cout << " hex" << endl;
			decBin(num);
			cout << " bin" << endl;
		}
		
		if(f == "hex"){
			hexDec(num);
			cout << " dec" << endl;
			hexBin(num);
			cout << " bin" << endl;
		}

		if(f == "bin"){
			binDec(num);
			cout << " dec" << endl;
			binHex(num);
			cout << " hex" << endl;
		}

		cout << endl;
	}
}