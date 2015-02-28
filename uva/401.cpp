#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
	string s;
	string c1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
	string c2 = "A   3  HIL JM O   2TUVWXY51SE Z  8 ";

	map <char, char> m;

	for (int i = 0; i < c1.size(); ++i)
	 	m[c1[i]] = c2[i];		 

	while(cin >> s){

		int pal=1, mir=1;
		int n = s.size();

		for (int i = 0; i <= n/2; ++i){
			if(s[i] != s[n - i - 1])
				pal = 0;

			if(s[i] != m[s[n - i - 1]])
				mir = 0;
		}

		if(pal == 0 && mir == 0)
			cout << s << " -- is not a palindrome." << endl << endl;
		if(pal == 1 && mir == 0)
			cout << s << " -- is a regular palindrome." << endl << endl;
		if(pal == 0 && mir == 1)
			cout << s << " -- is a mirrored string." << endl << endl;
		if(pal == 1 && mir == 1)
			cout << s << " -- is a mirrored palindrome." << endl << endl;
	}
}