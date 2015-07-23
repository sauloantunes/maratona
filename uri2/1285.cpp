#include <bits/stdc++.h>

using namespace std;

int main(){
	int m, n;

	while(cin >> m >> n){
		int t = n - m + 1;;

		while(m <= n){
			int v[10] = {0};

			int aux = m;

			while(aux){
				v[aux % 10]++;
				aux /= 10;
			}

			for (int i = 0; i < 10; ++i)
				if(v[i] > 1){
					t--;
					break;
				}
				
			m++;
		}

		cout << t << endl;

	}
}