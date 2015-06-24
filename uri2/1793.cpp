#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, a, b;

	while(cin >> n, n){
		int t = 10;
		cin >> a;

		for (int i = 1; i < n; ++i){
			cin >> b;
			t += min(10, b - a);
			a = b;
		}

		cout << t << endl;
	}
}