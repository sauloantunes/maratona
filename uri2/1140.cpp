#include <bits/stdc++.h>

using namespace std;

int main(){
	string s, r;

	while(getline(cin, s), s[0] != '*'){
		if(s[0] >= 'A' && s[0] <= 'Z')
			s[0] = s[0] - 'A' + 'a';

		stringstream ss(s);
		int t = 1;

		while(ss >> r){
			if(r[0] >= 'A' && r[0] <= 'Z')
				r[0] = r[0] - 'A' + 'a';

			if(r[0] != s[0]){
				t = 0;
				break;
			}
		}

		if(t)
			cout << "Y" << endl;
		else
			cout << "N" << endl;
	}
}