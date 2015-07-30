#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m[9][9];

	cin >> n;

	while(n--){
		memset(m, 0, sizeof m);


		for (int i = 0; i < 9; i += 2)
			for (int j = 0; j < i+1; j += 2)
				cin >> m[i][j];

		for (int j = 0; j < 8; j += 2)
			m[8][j+1] = (m[6][j] - m[8][j] - m[8][j+2]) / 2;

		for (int i = 7; i >= 0 ; i--)
			for (int j = 0; j <= i; ++j)
				m[i][j] = m[i+1][j] + m[i+1][j+1];


		for (int i = 0; i < 9; ++i){
			for (int j = 0; j <= i; ++j){
				if(j)
					cout << " ";
				cout << m[i][j];
			}
			cout << endl;
		}
	}
}