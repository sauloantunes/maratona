#include <cstdio>

int plantacao[1001][1001];

int main(){
	int l,c,m,n;
	int total_lote, max_rosas;

	while(1){
		scanf("%d %d %d %d", &l, &c, &m, &n);
		if(l+c+m+n == 0) break;

		max_rosas = 0;

		for (int i = 0; i < l; ++i)
			for (int j = 0; j < c; ++j)
				scanf("%d", &plantacao[i][j]);

		for (int i = 0; i <= l-m; ++i)
			for (int j = 0; j < c-n; ++j){
				total_lote = 0;
				for (int k = 0; k < m; ++k)
					for (int z = 0; z < n; ++z)
						total_lote += plantacao[i+k][j+z];

				if(total_lote > max_rosas)
					max_rosas = total_lote;
			}

		printf("%d\n", max_rosas);

	}
}