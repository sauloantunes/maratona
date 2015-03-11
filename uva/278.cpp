#include <iostream>

using namespace std;

int main(){
	char c;
	int q,m,n;

	cin >> q;

	while(q--){
		cin >> c >> m >> n;

		if(c == 'K')
			cout << ((m+1)/2) * ((n+1)/2) << endl;

		if(c == 'r')
			cout << min(m,n) << endl;

		if(c == 'Q')
			cout << min(m,n) << endl;

		if(c == 'k')
			cout << (m * n + 1) / 2 << endl;
	}
}