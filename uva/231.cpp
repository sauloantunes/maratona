#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, cont=1;

	while(cin >> n, n != -1){
		vector <int> v;
		int ans = 1;

		do {
			v.push_back(n);
			cin >> n;
		} while(n != -1);

		int dp[v.size()];

		for (int i = 0; i < v.size(); ++i){
			dp[i] = 1;
			for (int j = i-1; j >= 0 ; --j){
				if(v[j] >= v[i] && dp[j]+1 > dp[i]){
					dp[i] = dp[j]+1;
					ans = max(ans, dp[i]);
				}
			}
		}

		if(cont > 1)
			printf("\n");

		printf("Test #%d:\n", cont++);
		printf("  maximum possible interceptions: %d\n", ans);
	}
}