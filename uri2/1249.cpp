#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;

	while(getline(cin, s)){
		for (int i = 0; i < s.size(); ++i){
			if(s[i] >= 'a' && s[i] <= 'z'){
				s[i] += 13;
				if((unsigned)s[i] > 'z')
					s[i] += 'a' - 'z' - 1;
			}

			if(s[i] >= 'A' && s[i] <= 'Z'){
				s[i] += 13;
				if(s[i] > 'Z')
					s[i] += 'A' - 'Z' - 1;
			}
		}

		cout << s << endl;
	}
}