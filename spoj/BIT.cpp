#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, t = 1;

	while(cin >> n, n){
		cout << "Teste " << t++ << endl;

		int v[] = {50,10,5,1};

		for (int i = 0; i < 4; ++i){
			if(i)
				cout << " ";

			cout << n / v[i];
			n -= (n/v[i]) * v[i];
		}
		cout << "\n\n";
	}
}