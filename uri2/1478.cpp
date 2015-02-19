#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstring>

using namespace std;

int main(){
	int n;

	while(cin >> n, n){
		int m[n][n];
		int k = 1;

		for (int i = 0; i < n; ++i){
			for (int j = 0; j < n-i; ++j){
				m[j][j+i] = k;
				m[j+i][j] = k;
			}
			k++;
		}				
				
		for (int i = 0; i < n; ++i){
			for (int j = 0; j < n-1; ++j)
				cout << setw(3) << m[i][j]  << " ";
			cout << setw(3) << m[i][n-1] << endl;
		}

		cout << endl;
	}
}