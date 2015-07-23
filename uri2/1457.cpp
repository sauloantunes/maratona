#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, t;
	string s;

	cin >> t;

	while(t--){
		cin >> n >> s;
		int k = s.size();		
		long long r = 1;

		while(n > 0){
			r *= n;
			n -= k;
		}

		cout << r << endl;
	}
}