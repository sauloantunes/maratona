#include <bits/stdc++.h>

using namespace std;

map <int, char> decode;

void init(){
	for (int i = 0; i < 9; ++i){
		decode[129 + i] = 'a' + i;
		decode[193 + i] = 'A' + i;
		decode[145 + i] = 'j' + i;
		decode[209 + i] = 'J' + i;
	}

	for (int i = 0; i < 8; ++i){
		decode[162 + i] = 's' + i;
		decode[226 + i] = 'S' + i;
	}

	for (int i = 0; i < 10; ++i)
		decode[240 + i] = '0' + i;

	decode[64] = ' ';

}

int main(){
	string s;
	int n;

	init();

	while(getline(cin, s)){
		stringstream ss(s);

		while(ss >> std::oct >> n)
			cout << decode[n];
		
		cout << endl;
	}
}