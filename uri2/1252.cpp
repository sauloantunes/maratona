#include <bits/stdc++.h>

using namespace std;

int n, m;

bool mysort(int a, int b){
	int ra = a % m;
	int rb = b % m;

	if(ra != rb)
		return ra < rb;

	if(a&1 && !(b&1))
		return true;

	if(!(a&1) && b&1)
		return false;
	
	if(a&1 && b&1)
		return a > b;

	return a < b;
}

int main(){
	while(cin >> n >> m, m+n){
		int v[n];

		for (int i = 0; i < n; ++i)
			cin >> v[i];
		
		sort(v, v+n, mysort);

		cout << n << " " << m << endl;
	
		for (int i = 0; i < n; ++i)
			cout << v[i] << endl	;
	}

	cout << "0 0" << endl;

}