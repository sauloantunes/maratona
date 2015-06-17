#include <bits/stdc++.h>

using namespace std;

int main(){
	double l;

	while(cin >> l){
		l = 2 * sqrt(3) * l * l / 5;
		cout << fixed << setprecision(2) << l << endl;
	}
}