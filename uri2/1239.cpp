#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;

	while(getline(cin, s)){
		int tagb=0, tagi=0;

		for (int i = 0; i < s.size(); ++i){
			if(s[i] == '*'){
				if(tagb == 0)
					cout << "<b>";
				else
					cout << "</b>";			
				tagb = !tagb;
				continue;
			}

			if(s[i] == '_'){
				if(tagi == 0)
					cout << "<i>";
				else
					cout << "</i>";
				tagi = !tagi;
				continue;
			}

			cout << s[i];
		}

		cout << endl;
	}
}