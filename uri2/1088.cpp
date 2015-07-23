#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;

	while(cin >> n, n){
		int v[n];
		for (int i = 0; i < n; ++i){
			scanf("%d", &v[i]);
			v[i]--;
		}

		int m = 0;
		
		for (int i = 0; i < n; ++i){
			if(v[i] != i){
				int j = v[i];
				m += (j - i) * 2 - 1;
				v[i] = v[j];
				v[j] = j;
				i--;
			}
		}

		if(m % 2)
			cout << "Marcelo" << endl;
		else
			cout << "Carlos" << endl;
	}
}