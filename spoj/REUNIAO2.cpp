#include <bits/stdc++.h>

using namespace std;

#define MAX 105
#define INF 0x3f3f3f3f

int g[MAX][MAX];
int m,n,x,y,w;

void fw(){
	for (int k = 0; k < n; ++k)
		for (int i = 0; i < n; ++i)
			for (int j = 0; j < n; ++j)
				g[i][j] = min(g[i][j], g[i][k] + g[k][j]);
}

int main(){
	cin >> n >> m;

	memset(g, INF, sizeof g);

	for (int i = 0; i < n; ++i)
		g[i][i] = 0;

	for (int i = 0; i < m; ++i){
		cin >> x >> y >> w;
		g[x][y] = g[y][x] = w;
	}

	fw();

	int maxDist = INF;
	for (int i = 0; i < n; ++i){
		int soma = 0;
		int dist = -1;
		for (int j = 0; j < n; ++j)
			dist = max(dist, g[i][j]);
		
		maxDist = min(dist, maxDist);
	}

	cout << maxDist << endl;
}
