#include <bits/stdc++.h>

#define INF 0x3F3F3F3F
#define MAX 52

using namespace std;

int g[MAX][MAX], dis[MAX];
int c, e, l, p, x, y, cont=1;

void bfs(int v){
	queue<int> d;
	d.push(v);
	dis[v] = 0;

	while(!d.empty()){
		v = d.front();
		d.pop();

		if(dis[v] == p)
			continue;

		for (int i = 0; i <= c; ++i){
			if(g[v][i] && dis[i] == INF){
				d.push(i);
				dis[i] = dis[v] + 1;
			}
		}
	}
}

int main(){
	while(cin >> c >> e >> l >> p, c+e+l+p){
		memset(g,   0,   sizeof g);
		memset(dis, INF, sizeof dis);

		for (int i = 0; i < e; ++i){
			cin >> x >> y;
			g[x][y] = g[y][x] = 1;
		}

		bfs(l);

		printf("Teste %d\n", cont++);
		int f=1;

		for (int i = 0; i <= c; ++i){
			if(dis[i] != INF && dis[i]){
				if(f)
					cout << i;
				else
					cout << " " << i;

				f = 0;
			}
		}

		cout << "\n\n";
	}
}