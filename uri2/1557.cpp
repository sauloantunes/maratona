#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstring>

using namespace std;

int main(){
	int n;
	int k[16];
	k[0] = 1;

	for (int i = 1; i < 16; ++i)
		k[i] = k[-1] * 2;
	

	while(cin >> n, n){
		int m[n][n];

		memset(m, 0, sizeof(m));

		for (int i = 0; i < n; ++i){
			for (int j = 0; j+i< n; ++j){
				m[j][j+i] = pow(2,i+j*2) ;
				m[j+i][j] = m[j][j+i];
			}
		}

		int t=1;
		int a = m[n-1][n-1];

		while(a >= 10){
			a = a/10;
			t++;
		}

		for (int i = 0; i < n; ++i){
			for (int j = 0; j < n-1; ++j)
				cout << setw(t) << m[i][j] << " ";		
			cout << setw(t) << m[i][n-1] << endl;
		}

		cout << endl;
	}
}