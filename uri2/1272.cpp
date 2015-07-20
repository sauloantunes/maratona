#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;

	cin >> n;
	cin.get();

	while(n--){
		string s;

		getline(cin, s);
		int flag = 1;

		for (int i = 0; i < s.size(); ++i){
			if(s[i] != ' ' && flag){
				cout << s[i];
				flag = 0;
				continue;
			}
			if(s[i] == ' ')
				flag = 1;
		}

		cout << endl;
	}
}