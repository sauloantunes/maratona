#include <bits/stdc++.h>

#define INF 0x3F3F3F3F

using namespace std;

int g[14][14], aux[14][14];

int dx[] = {1,0,-1,0};
int dy[] = {0,-1,0,1};

int bfs(pair<int, int> pos){
	queue< pair<int, int> > q;
	q.push(pos);
	aux[pos.first][pos.second] = 0;

	while(!q.empty()){
		int x = q.front().first;
		int y = q.front().second;
		q.pop();

		for (int i = 0; i < 4; ++i){
			if(g[x + dx[i]][y + dy[i]] == 0)
				return aux[x][y] + 1;

			if(g[x + dx[i]][y + dy[i]] == 1 && aux[x + dx[i]][y + dy[i]] == INF){
				 aux[x + dx[i]][y + dy[i]] = aux[x][y] + 1;
				 q.push(make_pair(x + dx[i], y + dy[i]));
			}
		}
	}
}

int main(){
	int n, m;
	pair<int, int> pos;

	cin >> n >> m;

	memset(g,   INF, sizeof g);
	memset(aux, INF, sizeof aux);

	for (int i = 1; i <= n; ++i){
		for (int j = 1; j <= m; ++j){
			cin >> g[i][j];
			if(g[i][j] == 3){
				pos.first  = i;
				pos.second = j;
			}
		}
	}

	cout << bfs(pos) << "\n";
}