#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, r;

	while(cin >> n >> r){
		int v[n+1], t;
		memset(v, 0, sizeof v);

		for (int i = 0; i < r; ++i){
			cin >> t;
			v[t] = 1;
		}

		for (int i = 1; i <= n; ++i)
			if(v[i] == 0)
				cout << i << " ";

		if(r == n)
			cout << "*";

		cout << endl;
	}
}