#include <bits/stdc++.h>

using namespace std;

int main(){
	int t, q, count = 1;
	double a, b;

	while(cin >> t, t){

		while(t--){
			cin >> q >> a >> b;

			a = q * ((a+b) * 2.5);

			cout << "Size #" << count++ << ":" << endl;
			cout << "Ice Cream Used: " << fixed << setprecision(2) << a << " cm2" << endl;
		}

		cout << endl;
		count = 1;
	}
}