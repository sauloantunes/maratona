#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m;

	while(cin >> n >> m, n+m){
		int t = 0;
		int carry = 0;

		while(n+m){
			int an = n % 10;
			int am = m % 10;

			carry = (an + am + carry) / 10;
			t += carry;

			n /= 10;
			m /= 10;
		}

		if(t)
			if(t == 1)
				cout << t << " carry operation." << endl;
			else
				cout << t << " carry operations." << endl;
		else
			cout << "No carry operation." << endl;
	}
}