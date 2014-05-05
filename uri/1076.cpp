#include <iostream>

using namespace std;

int g[8][8];

int main(){
	int t,n,v,a,o,d;

	cin >> t;

	while(t--){
		cin >> n;
		cin >> v >> a;

		int cont = 0;
		for (int i = 0; i < v; i++)	{
			for (int j = 0; j < v; j++)	{
				g[i][j] = 0;
			}
		}

		while(a--){
			cin >> o >> d;
			if(! g[o][d])
				cont += 2;
			g[o][d] = 1;
			g[d][o] = 1;
		}

		cout << cont << endl;
	}
}