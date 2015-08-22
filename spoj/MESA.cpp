#include <bits/stdc++.h>

using namespace std;

int g[102][102], vis[102], n, bipartido;

void bfs(int v){
	for (int i = 0; i < n; ++i){
		if(g[v][i] && bipartido){
			if(vis[v] == vis[i]){
				bipartido = 0;
				return;
			}

			if(vis[i])
				continue;

			vis[i] = vis[v] == 1 ? 2 : 1;
			bfs(i);
		}
	}
}

int main(){
	int m, x, y, cont=1;

	while(cin >> n >> m){
		memset(g,   0, sizeof g);
		memset(vis, 0, sizeof vis);
		bipartido = 1;

		for (int i = 0; i < m; ++i){
			scanf("%d %d", &x, &y);
			x--; y--;
			g[x][y] = g[y][x] = 1;
		}

		for (int i = 0; i < n; ++i){
			if(!vis[i]){
				vis[i] = 1;
				bfs(i);
			}

			if(!bipartido)
				break;
		}

		printf("Instancia %d\n", cont++);

		if(bipartido)
			printf("sim\n\n");
		else
			printf("nao\n\n");
	}
}