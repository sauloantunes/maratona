#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, la, lb, sa, sb;

	cin >> n;
	cin >> la >> lb;
	cin >> sa >> sb;

	if(n >= min(la, lb) && n <= max(la, lb) && n >= min(sa, sb) && n <= max(sa, sb))
		cout << "possivel" << endl;
	else
		cout << "impossivel" << endl;
}