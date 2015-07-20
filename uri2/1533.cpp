#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;

	while(cin >> n, n){
		pair<int, int> a, b;
		a = b = make_pair(0,0);

		int t;

		for (int i = 1; i <= n; ++i){
			cin >> t;

			if(t > a.first){
				b = a;
				a = make_pair(t, i);
				continue;
			}
			if(a.first > t && t > b.first)
				b = make_pair(t, i);
		}

		cout << b.second << endl;
	}
}