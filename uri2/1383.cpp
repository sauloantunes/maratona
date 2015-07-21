#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, cont=1;

	cin >> n;

	while(n--){
		int m[9][9];

		for (int i = 0; i < 9; ++i)
			for (int j = 0; j < 9; ++j)
				cin >> m[i][j];

		int ok = 1;

		for (int i = 0; i < 9; ++i){
			for (int j = 0; j < 9; ++j){
				for (int k = j+1; k < 9; ++k){
					if(m[i][j] == m[i][k]){
						ok = 0;
						break;
					}
				}

				for (int k = i+1; k < 9; ++k){
					if(m[i][j] == m[k][j]){
						ok = 0;
						break;
					}
				}

				if(!ok)
					break;
			}
			if(!ok)
				break;
		}

		for (int i = 0; i < 3; ++i){
			for (int j = 0; j < 3; ++j){
				int x = 0;

				for (int k = 0; k < 3; ++k)
					for (int l = 0; l < 3; ++l)
						x |= 1 << ((m[3*i + k][3*j + l]) - 1 );
					
				if( x != (1 << 9) -1 )
					ok = 0;
			}	
			if(!ok)
				break;
		}


		cout << "Instancia " << cont++ << endl;

		if(ok)
			cout << "SIM" << endl;
		else
			cout << "NAO" << endl;

		cout << endl;
	}
}