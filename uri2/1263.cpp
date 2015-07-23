#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;

	while(getline(cin, s)){
		int ali=0, f=0;
		char c = ' ';
		stringstream ss(s);

		while(ss >> s){
			if(s[0] >= 'A' && s[0] <= 'Z')
				s[0] = s[0] - 'A' + 'a';

			if(s[0] == c){
				if(f)
					continue;

				ali++;
				f= 1;
			}
			else{
				c = s[0];
				f = 0;
			}
		}

		cout << ali << endl;
	}
}