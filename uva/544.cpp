#include <iostream>
#include <iomanip>
#include <cstdio>
#include <climits>
#include <cstring>
#include <map>

#define INF 0x3F3F3F3F

using namespace std;

int g[201][201];

int main(){
	int c, r, cont=1;

	while(cin >> c >> r, c+r) {
		memset(g, -1, sizeof g);

		for (int i = 0; i < c; ++i)
			g[i][i] = 0;

		map <string, int> m;
		string a, b;
		int w, q=0;

		for (int i = 0; i < r; ++i){
			cin >> a >> b >> w;

			if(!m.count(a))
				m[a] = q++;
			
			if(!m.count(b))
				m[b] = q++;

			g[m[a]][m[b]] = g[m[b]][m[a]] =  w;
		}

		cin >> a >> b;

		for (int i = 0; i < c; ++i)
			for (int j = 0; j < c; ++j)
				for (int k = 0; k < c; ++k)
					g[j][k] = g[k][j] = max(g[j][k], min(g[j][i], g[i][k]));

		cout << "Scenario #" << cont++ << endl;
		cout << g[m[a]][m[b]] << " tons" << endl;
		cout << endl;

	}
}
