#include <bits/stdc++.h>

#define INF 0x3f3f3f3f

using namespace std;

int main(){
	int m, n;

	while(cin >> m, m){
		cin >> n;
		int coinValue[n], change[m+1];

		for (int i = 0; i < n; ++i)
			cin >> coinValue[i];

		sort(coinValue, coinValue + n);

		memset(change, INF, sizeof change);
		change[0] = 0.;

		for (int i = 1; i <= m; ++i){
			for (int j = 0; j < n; ++j){
				if(coinValue[j] > i)
					break;

				change[i] = min(change[i], 1 + change[i - coinValue[j]]);
			}
		}
		
		if(change[m] == INF)
			cout << "Impossivel\n";
		else
			cout << change[m] << "\n";
	}
}