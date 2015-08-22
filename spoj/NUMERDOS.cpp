#include <bits/stdc++.h>

#define MAX 102
#define INF 0x3F3F3F3F

using namespace std;

int g[MAX][MAX], vis[MAX];
map< pair<string, string>, int> hash;

void bfs(int v){
	queue<int> q;
	q.push(v);
	vis[v] = 0;

	while(!q.empty()){
		v = q.front();
		q.pop();

		for (int i = 0; i < hash.size(); ++i){
			if(g[v][i] && vis[i] == INF){
				vis[i] = vis[v] + 1;
				q.push(i);
			}
		}
	}
}

int main(){
	int n, cont=1;
	string s, r;

	while(cin >> n, n){
		cin.get();
		hash.clear();
		memset(g,     0, sizeof g);
		memset(vis, INF, sizeof vis);
		pair <string, string> erdos("Erdos:", "P.");
		hash[erdos];

		while(n--){
			getline(cin, s);
			stringstream ss(s);
			vector<int> v;

			while(ss >> r >> s){
				s[s.size()-1] = ':';

				pair<string, string> p = make_pair(s, r);

				if(!hash.count(p))
					hash.insert(make_pair(p, hash.size()));

				v.push_back(hash[p]);
			}

			for (int i = 0; i < v.size(); ++i)
				for (int j = i+1; j < v.size(); ++j)
					g[ v[i] ][ v[j] ] = g[ v[j] ][ v[i] ] = 1;
		}
		
		bfs(hash[erdos]);

		map< pair<string, string>, int>::iterator it = hash.begin();

		printf("Teste %d\n", cont++);

		for (it; it != hash.end(); ++it){
			if(it->first == erdos)
				continue;
			
			cout << it->first.second << " " << it->first.first << " ";
			
			if(vis[it->second] == INF)
				cout << "infinito\n";
			else
				cout << vis[it->second] << "\n";
		}		

		cout << "\n";
	}
}