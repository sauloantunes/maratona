#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, t;

	cin >> n;

	while(n--){
		cin >> t;

		int v[t];
		for (int i = 0; i < t; ++i)
			scanf("%d", &v[i]);

		sort(v, v+t);

		printf("%d", v[0]);
		for (int i = 1; i < t; ++i)
			printf(" %d", v[i]);

		cout << endl;
	}
}