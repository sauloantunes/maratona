#include <iostream>

using namespace std;

int g[1001][1001];

int main(){

	int n,p,k,a,b;

	while(1){
		cin >> n >> p >> k;
		
		if(!n) break;

		for (int i = 0; i <= n; ++i){
			for (int j = 0; j <= n; ++j){
				g[i][j] = 0;
			}
		}

		while(p--){
			cin >> a >> b;
			g[a][b] = 1;
			g[b][a] = 1;
		}


	}
}