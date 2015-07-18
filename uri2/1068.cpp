#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;

	while(cin >> s){
		int pa = 0;

		for (int i = 0; i < s.size(); ++i){
			if(s[i] == '(')
				pa++;
			if(s[i] == ')')
				pa--;

			if(pa < 0)
				break;
		}

		if(pa == 0)
			cout << "correct" << endl;
		else
			cout << "incorrect" << endl;
	}
}