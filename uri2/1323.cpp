#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;

	while(cin >> n, n){
		int t = 0;

		for (int i = 1; i <= n; ++i)
			t += (n - i + 1) * (n - i + 1); 
		
		cout << t << endl;
	}
}