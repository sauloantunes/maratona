#include <iostream>
#include <iomanip>
#include <cstdio>

using namespace std;

int main(){
	int n;

	while(cin >> n){
		int m[n][n];
		for (int i = 0; i < n; ++i)
			for (int j = 0; j < n; ++j)
				m[i][j] = 3;

		for (int i = 0; i < n; ++i)
			m[i][i] = 1;

		for (int i = 0; i < n; ++i)
			m[i][n-i-1] = 2;

		for (int i = 0; i < n; ++i){
			for (int j = 0; j < n; ++j)
				cout << m[i][j];
			cout << endl;
		}
	}
}
