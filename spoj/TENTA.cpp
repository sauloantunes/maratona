#include <algorithm>
#include <cstdio>

using namespace std;

int main(){
	int n, v[8];

	while(scanf("%d", &n), n){		
		
		for (int i = 0; i < n; ++i)
			scanf("%d", &v[i]);
		
		sort(v, v+n);

		do {
			for (int i = 0; i < n - 1; ++i)
				printf("%d ", v[i]);
			
			printf("%d\n", v[n-1]);
		} while( next_permutation(v, v+n) );

		printf("\n");
	}
}