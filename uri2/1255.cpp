#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;

	cin >> n;
	cin.get();

	while(n--){
		int v[26], maior=0;
		memset(v, 0, sizeof v);

		string s;
		getline(cin, s);
		
		for (int i = 0; i < s.size(); ++i){
			if(s[i] >= 'A' && s[i] <= 'Z')
				s[i] = s[i] - 'A' + 'a';

			if(s[i] >= 'a' && s[i] <= 'z'){
				v[ s[i] - 'a']++;
				maior = max(maior, v[ s[i] - 'a']);
			}
		}
		for (int i = 0; i < 26; ++i)
			if(v[i] == maior)
				cout << (char) ('a' + i);
			
		cout << endl;
	}
}