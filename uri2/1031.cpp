#include <bits/stdc++.h>

using namespace std;

int getLast(int n, int m){
	int v[n];
	memset(v, 0, sizeof v);

	int pos = 0;
	for (int i = 0; i < n - 1; ++i){
		v[pos] = 1;

		for (int j = 0; j < m; ++j){
			pos = (pos + 1) % n;
			while(v[pos])
				pos = (pos + 1) % n;
		}
	}

	for (int i = 0; i < n; ++i)
		if(v[i] == 0)
			return i + 1;
}

int main(){
	int n;

	while(cin >> n, n){
		int m = 1;

		while(getLast(n, m) != 13)
			m++;
		
		cout << m << endl;
	}
}