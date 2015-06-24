#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;

	int f = 0;

	while(cin >> n){
		int m[n][n];
		memset(m, 0, sizeof m);

		for (int i = 0; i < n; ++i){
			m[i][i] = 2;
			m[i][n -1 -i] = 3;	
		}
		
		for (int i = n/3; i < n - n/3; ++i)
			for (int j = n/3; j < n - n/3; ++j)
				m[i][j] = 1;

		m[n/2][n/2] = 4;
		
		if(f)
			cout << endl;
		f = 1;

		for (int i = 0; i < n; ++i){
			for (int j = 0; j < n; ++j)
				cout << m[i][j];
			cout << endl;
		}

	}
}