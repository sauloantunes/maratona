#include <bits/stdc++.h>

using namespace std;

int ones(unsigned int n){
	int ones = 0;
	for (int i = 0; i < 32; ++i)
		if(n & 1 << i)
			ones++;

	return ones;
}

int main(){
	int t, m, d, c, k, v[20];

	cin >> t;

	while(t--){

		cin >> m >> d;
		memset(v, 0, sizeof v);

		for (int i = 0; i < d; ++i){
			cin >> c;
			while(c--){
				cin >> k;
				v[i] |= 1 << k;
			}
		}
		
		int dir = (1 << d) - 1;
		int mindir = 99;

		while(dir >= 0){
			unsigned int keys = 0;

			for (int i = 0; i < d; ++i)
				if(dir & 1 << i)
					keys |= v[i];

			if(ones(keys) >= m && ones(dir) < mindir)
				mindir = ones(dir);

			dir--;
		}

		if(mindir == 99)
			cout << "Desastre!" << endl;
		else
			cout << mindir << endl;

	}
}