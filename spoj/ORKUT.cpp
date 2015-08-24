#include <bits/stdc++.h>

#define MAX 32
#define INF 0X3F3F3F3F

using namespace std;

int g[MAX][MAX], indegree[MAX], pos[MAX], top[MAX];
int n;

void topoSort(){
	queue<int> q;
	for (int i = 0; i < n; ++i)
		if(!indegree[i])
			q.push(i);

	int posic = 0;
	memset(top, INF, sizeof top);
	
	while(!q.empty()){
		int m = q.front();
		q.pop();
		top[posic++] = m;

		for (int i = 0; i < pos[m]; ++i){
			int v = g[m][i];
			indegree[v]--;
			if(!indegree[v])
				q.push(v);
		}
	}
}

int main(){
	int m, x, y, cont=1;

	while(cin >> n, n){
		string r, s;
		map<string, int> hash;
		map<int, string> hash_back;

		for (int i = 0; i < n; ++i){
			cin >> s;
			hash[s] = i;
			hash_back[i] = s;
		}

		memset(indegree, 0, sizeof indegree);
		memset(pos,      0, sizeof pos);

		for (int i = 0; i < n; ++i){
			cin >> s >> m;
			x = hash[s];
			for (int j = 0; j < m; ++j){
				cin >> r; y = hash[r];
				g[y][pos[y]++] = x;
				indegree[x]++;
			}
		}

		topoSort();

		printf("Teste %d\n", cont++);

		if(top[n-1] == INF)
			cout << "impossivel";
		else
			for (int i = 0; i < n; ++i){
				if(i) printf(" ");
				cout << hash_back[top[i]];
			}

		cout << "\n\n";
	}
}