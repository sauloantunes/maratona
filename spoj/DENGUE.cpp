#include <bits/stdc++.h>

#define INF 0x3F3F3F3F
#define MAX 102

using namespace std;

int g[MAX][MAX];
int n, x, y, aux, cont=1;

void fw(){
	for (int k = 0; k < n; ++k)
		for (int j = 0; j < n; ++j)
			for (int i = 0; i < n; ++i)
				g[i][j] = min(g[i][j], g[i][k] + g[k][j]);
}

int main(){
	while(cin >> n, n){
		memset(g, INF, sizeof g);

		for (int i = 0; i < n-1; ++i){
			cin >> x >> y;
			x--; y--;
			g[x][y] = g[y][x] = 1;
		}

		for (int i = 0; i < n; ++i)
			g[i][i] = 0;

		fw();

		int price = INF;
		int vila;

		for (int i = 0; i < n; ++i){
			aux = 0;
			for (int j = 0; j < n; ++j)
				aux = max(aux, g[i][j]);
			
			if(aux < price){
				price = aux;
				vila = i+1;
			}
		}

		printf("Teste %d\n", cont++);
		printf("%d\n\n", vila);
	}
}