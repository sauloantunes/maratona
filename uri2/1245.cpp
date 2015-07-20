#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, b;
	char s;

	while(cin >> n){
		int d[61], e[61];

		memset(d, 0, sizeof d);
		memset(e, 0, sizeof e);

		for (int i = 0; i < n; ++i){
			cin >> b >> s;
			if(s == 'D')
				d[b]++;
			else
				e[b]++;
		}

		int t = 0;
		for (int i = 0; i < 61; ++i)
			t += min(d[i], e[i]);
		
		cout << t << endl;
	}
}