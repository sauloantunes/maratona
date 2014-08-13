#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n, t, s, m;
	cin >> n;

	for (int i = 1; i <= n; ++i){
		cin >> t;
		m = 0;
		while(t--){
			cin >> s;
			m = max(s,m);
		}
		cout << "Case " << i << ": " << m << endl;
	}
}