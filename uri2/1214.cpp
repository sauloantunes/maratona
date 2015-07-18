#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, c;

	cin >> n;

	while(n--){
		cin >> c;
		int v[c], a=0, aux=0;

		for (int i = 0; i < c; ++i){
			cin >> v[i];
			aux += v[i];
		}

		aux = aux / c;

		for (int i = 0; i < c; ++i)
			if(v[i] > aux)
				a++;

		cout << fixed << setprecision(3) << (float) 100*a/c << "%" << endl;

	}
}