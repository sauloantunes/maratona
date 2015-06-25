#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	string s;

	while(cin >> s){
		int b1 = 0;
		int b2 = 0;
		for (int i = 0; i < 9; ++i){
			b1 += (s[i] - '0') * (i+1);
			b2 += (s[i] - '0') * (9 - i);
		}

		b1 = (b1 % 11) % 10;
		b2 = (b2 % 11) % 10;

		cout << s.substr(0,3) << "." <<  s.substr(3,3) << "." << s.substr(6,3) << "-" << b1 << b2 << endl;
	}
}