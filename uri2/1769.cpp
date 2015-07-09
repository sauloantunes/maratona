#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;

	while(cin >> s){
		int b1=0, b2=0;

		s.erase(11,1);
		s.erase(7,1);
		s.erase(3,1);

		for (int i = 0; i < 9; ++i){
			b1 += (s[i] -'0') * (i + 1);
			b2 += (s[i] -'0') * (9 - i);
		}

		b1 = (b1 % 11) % 10;
		b2 = (b2 % 11) % 10;

		if(b1 == (s[9] - '0') && b2 == (s[10] - '0'))
			cout << "CPF valido" << endl;
		else
			cout << "CPF invalido" << endl;
	}
}