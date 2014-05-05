#include <iostream>
#include "stdio.h"
#include <string.h>
#define INF 0x3F3F3F3F
#define MAX 501
using namespace std;

int g[510][510];
int dist[510];
bool visitado[510];
int pred[MAX];

void dijkstra(int ordem, int s){
	int pilha[ordem];
	int topo = -1;
	int v;

	for (int i = 0; i <= ordem; i++)
		dist[i] = INF;
	
	dist[s] = 0;
	pilha[++topo] = s;

	while(topo != -1){
		v = pilha[topo--];
		for (int i = 1; i <= ordem; i++){
			if(dist[i] > dist[v] + g[v][i]){
				dist[i] = dist[v] + g[v][i];
				pilha[++topo] = i;
			}
		}
	}
}

void dijkstra2 (int n,int p){
    int v,c;

    memset (dist, INF, sizeof(dist));
    memset (visitado, 0, sizeof(visitado));
    memset (pred, -1, sizeof(pred));

    dist[p] = 0;
    v = p;

    while (!visitado[v]){
        visitado[v] = true;
        for (int i=1; i<=n; i++){
            if (g[v][i] != INF){
                    c = g[v][i];
                    if (dist[i] > dist[v]+c){
                        dist[i] = dist[v]+c;
                        pred[i] = v;
                    }
                }
            }
        v = 0;
        c = INF;
        for (int i=1; i<=n; i++){
            if(visitado[i] == false && c>dist[i]){
                c=dist[i];
                v=i;
            }
        }
    }
}

int main(){

	long long int aux;
	int n,e,x,y,h,k,o,d;

	while(1){

		cin >> n >> e;

		if(n == 0 && e == 0) break;

		for (int i = 0; i <= n; i++)
			for (int j = 0; j <= n; j++)
				g[i][j] = INF;

		while(e--){
			cin >> x >> y >> h;
			g[x][y] = h;
		}

		for (int i = 1; i <= n; i++)	{
			for (int j = 1; j <= n; j++)	{
				if(g[i][j] != INF && g[j][i] != INF){
					g[i][j] = 0;
					g[j][i] = 0;
				}
			}
		}

		cin >> k;

		while(k--){
			cin >> o >> d;
			dijkstra2(n,o);

			if(dist[d] < INF)
				cout << dist[d] << endl;
			else
				cout << "Nao e possivel entregar a carta" << endl;
		}

		cout << endl;
	}
}