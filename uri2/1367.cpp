#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, t;
	char p;
	string s;

	while(cin >> n, n){
		map<char, int> m;
		int solved=0, total=0;

		for (int i = 0; i < n; ++i){
			cin >> p >> t >> s;

			if(!m.count(p))
				m[p] = 0;

			if(s[0] == 'c'){
				solved++;
				total += t + m[p] * 20;
			} else
				m[p]++;
		}

		cout << solved << " " << total << endl;
	}
}