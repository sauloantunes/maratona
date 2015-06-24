#include <bits/stdc++.h>

using namespace std;

set<long long> pot;

int main(){
	long long n = 2;

	while(n < 1000000001){
		pot.insert(n);
		n = n << 1;
	}

	int U,R,I;
	long long nu, nr, ni, maior;

	while(cin >> n, n){
		U = R = I = 0;
		for (int i = 0; i < n; ++i){
			cin >> nu >> nr >> ni;
			maior = max(nu, nr);
			maior = max(maior, ni);

			if(pot.count(nu)){				
				U++;
				U += maior == nu ? 1 : 0;
			}
			if(pot.count(nr)){
				R++;
				R += maior == nr ? 1 : 0;
			}
			if(pot.count(ni)){
				I++;
				I += maior == ni ? 1 : 0;
			}
		}

		if(U > R && U > I){
			cout << "Uilton" << endl;
			continue;
		}
		if(R > U && R > I){
			cout << "Rita" << endl;
			continue;
		}
		if(I > U && I > R){
			cout << "Ingred" << endl;
			continue;
		}

		cout << "URI" << endl;
	}
}