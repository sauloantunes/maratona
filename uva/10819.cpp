#include <bits/stdc++.h>

using namespace std;

vector< pair< int, int> > v;

int main(){
	int m, n, x, y;

	while(cin >> m >> n){
		v.clear();
		v.push_back(make_pair(0,0));
		for (int i = 0; i < n; ++i){
			cin >> x >> y;
			v.push_back(make_pair(x, y));
		}

		int f = 0;
		if(m > 1800){
			m += 200;
			f = 1;
		}

		int pd[n+1][m+1];
		int aux[n+1][m+1];
		memset(pd, 0, sizeof pd);
		memset(aux, 0, sizeof aux);

		for (int i = 1; i < n+1; ++i){
			for (int j = 0; j < m+1; ++j){
				if(j >= v[i].first){
					if(pd[i-1][j] > pd[i-1][j - v[i].first] + v[i].second){
						pd[i][j] = pd[i-1][j];
						aux[i][j] = aux[i-1][j];
					}else{
						pd[i][j] = pd[i-1][j - v[i].first] + v[i].second;
						aux[i][j] = aux[i-1][j - v[i].first] + v[i].first;
					}
				}
				else{
					pd[i][j]  = pd[i-1][j];
					aux[i][j] = aux[i-1][j];
				}
			}
		}

		int maior;

		if(!f)
			maior = pd[n][m];
		else{
			maior = pd[n][m-200];
			for (int i = m-200; i < m+1; ++i)
				if(aux[n][i] > 2000)
					maior = max(maior, pd[n][i]);
		}

		cout << maior << endl;
	}
}