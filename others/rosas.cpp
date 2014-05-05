#include <iostream>
#include <cstdio>

using namespace std;

long long int M[1002][1002];
long long int soma[1002][1002];


int main(){
	int l,c,m,n;
	long long int local,maior=0;

	while(1){
		maior = 0;
		//cin >> l >> c >> m >> n;
		scanf("%d %d %d %d", &l, &c, &m, &n);
		if(l+c+m+n == 0) break;

		for (int i = 0; i <= l; i++)
			soma[i][0] = 0;
		
		for (int i = 0; i <= c; i++)
			soma[0][i] = 0;

		for (int i = 1; i <= l; i++)
			for (int j = 1; j <= c; j++)
				scanf("%d", &M[i][j]);
				//cin >> M[i][j];

		for (int i = 1; i <= l; i++)
			for (int j = 1; j <= c; j++)
				soma[i][j] = M[i][j] + soma[i-1][j] + soma[i][j-1] - soma[i-1][j-1];

		for (int i = 1; i <= l-m+1; i++){
			for (int j = 1; j <= c-n+1; j++){
				local = soma[i+m-1][j+n-1] + soma[i-1][j-1] - soma[i+m-1][j-1] - soma[i-1][j+n-1];
				if(local > maior)
					maior = local;
			}
		}

		cout << maior << endl;
	}
}