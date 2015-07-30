#include <bits/stdc++.h>

using namespace std;

int v[1010][1010];

int main(){
	int n, m;
	int x[] = {1, 1, 0,-1,-1,-1,0,1};
	int y[] = {0,-1,-1,-1, 0, 1,1,1};

	while(cin >> n >> m){

		for (int i = 0; i < n + 2; ++i){
			v[i][0]   = INT_MIN;
			v[i][m+1] = INT_MIN;
		}

		for (int i = 0; i < m + 2; ++i){
			v[0][i]   = INT_MIN;
			v[n+1][i] = INT_MIN;
		}

		for (int i = 1; i <= n; ++i)
			for (int j = 1; j <= m; ++j)
				cin >> v[i][j];

		int p = 1;
		for (int i = 1; i <= n; ++i){
			for (int j = 1; j <= m; ++j){
				int f=1;

				for (int k = 0; k < 8; ++k){
					if(v[i + x[k]][j + y[k]] >= v[i][j]){
						f = 0;
						break;
					}
				}

				if(f){
					cout << i << " " << j << endl;
					p = 0;
				}
			}
		}

		if(p)
			cout << "-1" << endl;

		cout << endl;
	}
}