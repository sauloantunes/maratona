#include <bits/stdc++.h>

#define INF 0x3F3F3F3F
#define MAX 102

using namespace std;

int vis[MAX], g[MAX][MAX];
int n, x, y, aux, cont=1;

void dfs(int v){
	for (int i = 0; i < n; ++i){
		if(g[v][i] && vis[i] == INF){
			vis[i] = vis[v]+1;
			dfs(i);
		}
	}
}

int main(){
	while(cin >> n, n){
		memset(g, 0, sizeof g);

		for (int i = 0; i < n-1; ++i){
			cin >> x >> y;
			x--; y--;
			g[x][y] = g[y][x] = 1;
		}

		int price = INF;
		int vila;

		for (int i = 0; i < n; ++i){
			memset(vis, INF, sizeof vis);
			vis[i] = 0;
			dfs(i);
			aux = 0;
			for (int j = 0; j < n; ++j)
				aux = max(aux, vis[j]);

			if(aux < price){
				price = aux;
				vila = i+1;
			}
		}

		printf("Teste %d\n", cont++);
		printf("%d\n\n", vila);
	}
}