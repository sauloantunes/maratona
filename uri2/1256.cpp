#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m, c, k, l=0;

	cin >> n;

	while(n--){
		cin >> m >> c;
		vector<int> v[m];

		for (int i = 0; i < c; ++i){
			cin >> k;
			v[k % m].push_back(k);
		}

		if(l++)
			printf("\n");

		for (int i = 0; i < m; ++i){
			printf("%d -> ", i);

			for (int j = 0; j < v[i].size(); ++j)
				printf("%d -> ", v[i][j]);
			
			printf("\\\n");
		}
	}
}