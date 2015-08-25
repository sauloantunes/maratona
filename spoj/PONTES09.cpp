#include <bits/stdc++.h>

#define INF 0X3F3F3F3F
#define MAX 1500

using namespace std;

int g[MAX][MAX], dist[MAX], vis[MAX], n;

void djk(int v){
	dist[v] = 0;

	while(!vis[v]){
		vis[v] = 1;
		for (int i = 0; i < n; ++i)
			if(g[v][i] != INF && dist[i] > dist[v] + g[v][i])
				dist[i] = dist[v] + g[v][i];

		int c = INF;

		for (int i = 0; i < n; ++i){
			if(!vis[i] && c > dist[i]){
				v = i;
				c = dist[i];
			}
		}
	}
}

int main(){
	int m, w, x, y;

	cin >> n >> m;
	n += 2;

	memset(dist, INF, sizeof dist);
	memset(vis,    0, sizeof vis);
	memset(g,    INF, sizeof g);

	for (int i = 0; i < m; ++i){
		cin >> x >> y >> w;
		g[x][y] = g[y][x] = w;
	}

	djk(0);

	cout << dist[n-1] << "\n";
}