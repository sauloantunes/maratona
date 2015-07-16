#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;

	cin >> n;

	while(n--){
		map<string, float> prices;
		string s;
		float p;
		int m;

		cin >> m;
		for (int i = 0; i < m; ++i){
			cin >> s >> p;
			prices[s] = p;
		}

		float t=0;
		int q;
		cin >> m;

		for (int i = 0; i < m; ++i){
			cin >> s >> q;
			t += prices[s] * q;
		}

		cout << "R$ " << fixed << setprecision(2) << t << endl;
	}
}