#include <bits/stdc++.h>

using namespace std;

int main(){
	int t, r, n=0;

	cin >> t;

	for (int i = 0; i < 5; ++i){
		cin >> r;
		n = t == r ? n+1 : n;
	}

	cout << n << endl;
}