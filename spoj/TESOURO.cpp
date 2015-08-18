#include <bits/stdc++.h>

using namespace std;

int pd[10000];

int main(){
	int x, y, n;
	int cont = 1;

	while(cin >> x >> y >> n, x+y+n){
		int p[n], total = 0;

		for (int i = 0; i < n; ++i){
			cin >> p[i];
			total += p[i];
		}
		
		printf("Teste %d\n", cont++);
		
		if(x+y+total & 1){
			printf("N\n\n");
			continue;
		}

		int c = (total - abs(x-y)) / 2;

		memset(pd, 0, sizeof pd);
		pd[0] = 1;

		for (int i = 0; i < n && !pd[c]; ++i)
			for (int j = c; j >= p[i]; j--)
				pd[j] |= pd[j - p[i]];

		if(pd[c])
			printf("S\n\n");
		else
			printf("N\n\n");
	}
}