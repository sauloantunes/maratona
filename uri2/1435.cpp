#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstring>

using namespace std;

int main(){
	int n;

	while(cin >> n, n){
		int m[n][n];

		memset(m,0, sizeof m);

		for (int k = 0; k < n; ++k)
			for (int i = k; i < n - k; ++i)
				for (int j = k; j < n - k; ++j)
					m[i][j]++;

		for (int i = 0; i < n; ++i){
			for (int j = 0; j < n-1; ++j)
				cout << setw(3) << m[i][j]  << " ";
			cout << setw(3) << m[i][n-1] << endl;
		}

		cout << endl;
	}
}