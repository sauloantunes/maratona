#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, d, t;

	while(cin >> n >> d, n+d){
		int v[n];

		for (int i = 0; i < n; ++i)
			v[n] = 1;
		
		for (int i = 0; i < d; ++i){
			for (int j = 0; j < n; ++j){
				cin >> t;
				v[j] = v[j] && t;
			}
		}

		int f = 0;
		for (int i = 0; i < n; ++i){
			if(v[i]){
				f = 1;
				break;
			}
		}

		if(f)
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
}