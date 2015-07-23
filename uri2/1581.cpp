#include <bits/stdc++.h>

using namespace std;

int main(){
	int m, n;
	string r, s;

	cin >> n;

	while(n--){
		cin >> m;
		cin >> r;

		for (int i = 1; i < m; ++i){
			cin >> s;

			if(r != s)
				r = "ingles";
		}

		cout << r << endl;
	}
}