#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, f=0;

	while(cin >> n, n){
		string v[n];
		int t=0;
		for (int i = 0; i < n; ++i){
			cin >> v[i];
			t = max(t, (int)v[i].size());
		}

		if(f)
			cout << endl;
		f = 1;

		for (int i = 0; i < n; ++i)
			cout << setw(t) << right << v[i] << endl;
	}
}