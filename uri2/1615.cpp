#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstring>

using namespace std;

int main(){
	int m,n,t,x;
	int v[11];

	cin >> t;

	while(t--){
		cin >> n >> m;
		memset(v, 0, sizeof v);

		for (int i = 0; i < m; ++i){
			cin >> x;
			v[x]++;
		}

		int w = -1;

		for (int i = 1; i <= n; ++i)
			if(v[i] > m/2){
				w = i;
				break;
			}
		
		cout << w << endl;

	}
}
