#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;
		string students[n];

		for (int i = 0; i < n; ++i)
			cin >> students[i];

		int f = 0;
		for (int i = 0; i < n; ++i){
			int present=0, total;
			string s;
			cin >> s;
			total = s.size();
			for (int j = 0; j < s.size(); ++j){
				if(s[j] == 'P')
					present++;
				if(s[j] == 'M')
					total--;
			}
			if((float) present / total < 0.75){
				if(f)
					cout << " ";
				cout << students[i];
				f = 1;
			}
		}
		cout <<  endl;
	}
}