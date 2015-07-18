#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;

	cin >> n;

	for (int i = 1; i <= n; ++i){
		string s, o[3] = {"AT: ", "DF: ", "SP: "};
		float l, bs, iv, ev;
		int r;

		cin >> s >> l;
		cin >> bs >> iv >> ev;

		r = (iv + bs + sqrt(ev)/8 + 50) * l / 50 + 10;
		cout << "Caso #" << i << ": " << s << " nivel " << l << endl;
		cout << "HP: " << r << endl;

		for (int j = 0; j < 3; ++j){
			cin >> bs >> iv >> ev;
			r = (iv + bs + sqrt(ev)/8) * l / 50 + 5;
			cout << o[j] << r << endl;
		}
	}
}