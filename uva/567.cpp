#include <iostream>
#include <queue>
#include <cstring>

#define INF 0x3F3F3F3F

using namespace std;

int g[21][21];
int dist[21];

void bfs(int v){
	memset(dist, INF, sizeof dist);
	dist[v] = 0;
	queue <int> q;	
	q.push(v);

	while(!q.empty()){
		v = q.front();
		q.pop();		

		for (int i = 1; i <= 20; ++i){
			if(g[v][i] && dist[i] == INF){		
				dist[i] = dist[v] + 1;
				q.push(i);
			}
		}
	}
}

int main(){
	int a,b,n,c,t=1;
	memset(g, 0, sizeof g);

	while(cin >> n){
		while(n--){
			cin >> c;
			g[1][c] = 1;
			g[c][1] = 1;
		}

		for (int i = 2; i <= 19; ++i){
			cin >> n;
			while(n--){
				cin >> c;
				g[i][c] = 1;
				g[c][i] = 1;
			}
		}

		printf("Test Set #%d\n", t++);
		cin >> n;
		while(n--){
			cin >> a >> b;
			bfs(a);
			printf("%2d to %2d: %d\n", a, b, dist[b]);
		}
		printf("\n");
		memset(g, 0, sizeof g);
	}
}