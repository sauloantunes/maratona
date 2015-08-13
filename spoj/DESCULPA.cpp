#include <bits/stdc++.h>

using namespace std;

int v[51], w[51], t[51][1001], n;

int main(){
	int s, c=1;

	while(cin >> s >> n, s+n){
		w[0] = v[0] = 0;

		for (int i = 1; i <= n; ++i)
			cin >> w[i] >> v[i];

		memset(t, 0, sizeof t);

		for (int i = 1; i <= n; ++i){
			for (int j = 1; j <= s; ++j){
				if(w[i] > j)
					t[i][j] = t[i-1][j];
				else
					t[i][j] = max(v[i] + t[i-1][j - w[i]], t[i-1][j]);
			}
		}

		cout << "Teste " << c++ << "\n" << t[n][s] << "\n\n";
	}
}