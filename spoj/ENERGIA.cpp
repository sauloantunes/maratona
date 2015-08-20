#include <bits/stdc++.h>

using namespace std;

int g[102][102], vis[102], e;

void bfs(int v){
	vis[v] = 1;

	for (int i = 0; i < e; ++i)
		if(g[v][i] && !vis[i])
			bfs(i);
}


int main(){
	int l, x, y, cont=1;

	while(cin >> e >> l, e+l){
		memset(g, 0, sizeof g);
		memset(vis, 0, sizeof vis);

		for (int i = 0; i < l; ++i){
			cin >> x >> y;
			x--; y--;
			g[x][y] = g[y][x] = 1;
		}

		printf("Teste %d\n", cont++);

		bfs(0);
		int f = 1;

		for (int i = 0; i < e; ++i){
			if(!vis[i]){
				f = 0;
				break;
			}
		}

		if(f)
			printf("normal\n\n");
		else
			printf("falha\n\n");
	}
}