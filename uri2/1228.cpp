#include <iostream>

using namespace std;

int main(){
	int n;

	while(cin >> n){
		int gi[n], gf[n];

		for (int i = 0; i < n; ++i)
			cin >> gi[i];

		for (int i = 0; i < n; ++i)
			cin >> gf[i];

		int u = 0;
		for (int i = 0; i < n; ++i){
			if(gf[i] != gi[i]){
				int j = i + 1;
				while( gi[j] != gf[i])
					j++;

				while(j != i){
					int aux = gi[j-1];
					gi[j-1] = gi[j];
					gi[j] = aux;
					u++;
					j--;
				}
			}
		}

		cout << u << endl;
	}
}