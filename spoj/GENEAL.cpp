#include <bits/stdc++.h>

#define MAX 1002
#define INF 0X3F3F3F

using namespace std;

int g[MAX][MAX], vis[MAX], dist[MAX], n, maxDist, maxV;

void dfs(int v){
	vis[v] = 1;

	for (int i = 0; i < n; ++i){
		if(g[v][i] && !vis[i]){
			dist[i] = dist[v] + 1;
			if(dist[i] > maxDist){
				maxV = i;
				maxDist = dist[i];
			}
			dfs(i);
		}
	}
}

int main(){
	int cont=0;
	string r, s;
	map<string, int> hash;
	map<int, string> hash_back;

	cin >> n;
	memset(g,   0, sizeof g);

	for (int i = 0; i < n; ++i){
		cin >> s >> r;

		if(!hash.count(s)){
			hash[s] = cont;
			hash_back[cont++] = s;
		}

		if(!hash.count(r)){
			hash[r] = cont;
			hash_back[cont++] = r;
		}

		g[hash[r]][hash[s]] = g[hash[s]][hash[r]] = 1;
	}

	n = hash.size();

	memset(vis,    0, sizeof vis);
	dist[0] = maxDist = maxV = 0;
	dfs(0);
	int aux = maxV;

	memset(vis,    0, sizeof vis);

	dist[aux] = maxDist = 0;
	dfs(aux);

	if(hash_back[aux] < hash_back[maxV])
		cout << hash_back[aux] << " " << hash_back[maxV] << " " << maxDist << endl;
	else
		cout << hash_back[maxV] << " " << hash_back[aux] << " " << maxDist << endl;
}
