#include "bits/stdc++.h"

#define MAX 5002

using namespace std;

int g[MAX][MAX], vis[MAX];
int qtd, c, r;

void busca(int v){
	qtd++;
	vis[v] = 1;

	for (int i = 0; i < c; ++i){
		if(g[v][i] && !vis[i])
			busca(i);
	}
}

int main(){

	while(cin >> c >> r, c+r){
		map<string, int> hash;
		string s, q;

		for (int i = 0; i < c; ++i){
			cin >> s;
			hash[s] = i;
		}
		
		memset(g,   0, sizeof g);

		for (int i = 0; i < r; ++i){
			cin >> s >> q;
			g[hash[s]][hash[q]] = g[hash[q]][hash[s]] = 1;
		}

		int maxQtd = 0;
		memset(vis, 0, sizeof vis);

		for (int i = 0; i < c; ++i){
			qtd = 0;
			if(!vis[i])
				busca(i);
			maxQtd = max(maxQtd, qtd);
		}

		cout << maxQtd << "\n";
	}
}
