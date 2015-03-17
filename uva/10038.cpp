#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>

using namespace std;

int main(){
	int n, d, x, y;

	ios_base::sync_with_stdio(false);

	while(cin >> n){
		char v[n];

		memset(v, 0, sizeof v);

		if(n == 1){
			cin >> x;
			cout << "Jolly" << endl;
			continue;
		}

		cin >> x;

		for (int i = 1; i < n; ++i){
			cin >> y;
			d = abs(x - y);

			v[d] = 1;
			x = y;
		}

		int j = 1;

		for (int i = 1; i < n; ++i){
			if(v[i] == 0){
				j = 0;
				break;
			}
		}

		if(j)
			cout << "Jolly" << endl;
		else
			cout << "Not jolly" << endl;
	}
}