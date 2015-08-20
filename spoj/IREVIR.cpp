#include <bits/stdc++.h>

using namespace std;

int g[2002][2002], f[2002];
int n, m, v, w, p;

void dfs(int vert){
	f[vert] = 1;

	for (int i = 0; i < n; ++i)
		if(g[vert][i] && !f[i])
			dfs(i);
}


int main(){

	while(cin >> n >> m, m+n){
		memset(g, 0, sizeof g);

		for (int i = 0; i < m; ++i){
			cin >> v >> w >> p;
			v--; w--;
			g[v][w] = 1;
			g[w][v] = p == 2 ? 1 : 0;
		}

		int g = 1;

		for (int i = 0; i < n; ++i){
			memset(f, 0, sizeof f);
			dfs(i);

			for (int j = 0; j < n; ++j){
				if(!f[j]){
					g = 0;
					break;
				}
			}

			if(!g)
				break;
		}

		cout << g << "\n";
	}
}