#include <bits/stdc++.h>

using namespace std;

int main(){
	int m, n;

	while(cin >> m >> n, m+n){
		int v[m+1], t;
		memset(v, 0, sizeof v);
		int fakes = 0;

		for (int i = 0; i < n; ++i){
			cin >> t;
			if(v[t] == 1){
				fakes++;	
				v[t]++;
			}
			if(v[t] == 0)
				v[t] = 1;
		}

		cout << fakes << endl;
	}
}