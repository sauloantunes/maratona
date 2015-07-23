#include <bits/stdc++.h>

using namespace std;

int main(){
	string s, r;

	while(getline(cin, s)){
		getline(cin, r);

		int m = 0;

		for (int i = 0; i < s.size(); ++i){
			for (int j = 0; j < r.size(); ++j){
				if(s[i] == r[j]){
					int k = 0;
					while(1){
						m = max(k, m);
						if(i+k < s.size() && j+k < r.size() && s[i+k] == r[j+k])
							k++;
						else
							break;
					}
				}
			}
		}

		cout << m << endl;
	}
}