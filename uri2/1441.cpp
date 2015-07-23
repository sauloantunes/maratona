#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;

	while(cin >> n, n){
		int m = n;

		while(n != 1){
			if(n & 1){
				n = 3 * n + 1;
				m = max(m, n);
			}
			else
				n = n >> 1;
		}

		cout << m << endl;
	}
}