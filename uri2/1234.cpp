#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;

	while(getline(cin, s)){
		int up = 1;

		for (int i = 0; i < s.size(); ++i){
			if(s[i] == ' ')
				continue;

			if(up){
				if(s[i] > 'Z')
					s[i] -= 32;
			} else
				if(s[i] < 'a')
					s[i] += 32;
			
			up = !up;
		}

		cout << s << endl;
	}
}