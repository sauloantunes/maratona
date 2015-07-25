#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;

	while(cin >> n){
		string v[n];

		for (int i = 0; i < n; ++i)
			cin >> v[i];

		sort(v, v+n);
		int m = 0;

		for (int i = 1; i < n; ++i){
			for (int j = 0; j < v[i].size(); ++j){
				if(v[i][j] == v[i-1][j])
					m++;
				else
					break;
			}
		}

		cout << m << endl;
	}
}