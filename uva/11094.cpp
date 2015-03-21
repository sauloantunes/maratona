#include <iostream>
#include <cstring>

using namespace std;

char g[21][21];
char land;
int m, n;

int cx[] = {1, 0, -1,  0};
int cy[] = {0, 1,  0, -1};


int floodFill(int x, int y){
	if(g[x][y] != land)
		return 0;

	g[x][y]++;
	int ans = 1;

	for (int i = 0; i < 4; ++i){
		int tmpX, tmpY;
		tmpX = x + cx[i];
		tmpY = y + cy[i];

		if(tmpX == m || tmpX == -1)
			continue;

		if(tmpY == n)
			tmpY = 0;
		if(tmpY == -1)
			tmpY = n -1;

		ans += floodFill(tmpX, tmpY);
	}

	return ans;
}


int main(){
	while(cin >> m >> n){
		for (int i = 0; i < m; ++i)
			for (int j = 0; j < n; ++j)
				cin >> g[i][j];			
			
		int kx, ky;
		cin >> kx >> ky;

		land = g[kx][ky];

		floodFill(kx, ky);

		int king = 0;

		for (int i = 0; i < m; ++i)
			for (int j = 0; j < n; ++j)
				king = max(king, floodFill(i, j));

		cout << king << endl;
	}
}