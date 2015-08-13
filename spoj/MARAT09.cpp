#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, d, p0=0, p1;

	cin >> n >> d;

	cin >> p0;

	for (int i = 1; i < n; ++i){
		cin >> p1;
		if(p1 - p0 > d){
			cout << "N" << endl;
			return 0;
		}

		p0 = p1;
	}

	if(42195 - p0 > d)
		cout << "N" << endl;
	else
		cout << "S" << endl;
}