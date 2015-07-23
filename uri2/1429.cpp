#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;

	int fat[6];
	fat[0] = 1;

	for (int i = 1; i < 6; ++i)
		fat[i] = i * fat[i-1];

	while(cin >> n, n){
		int r = 0;
		int i = 1;
		while(n){
			r += fat[i++] * (n % 10);
			n /= 10;
		}

		cout << r << endl;
	}
}