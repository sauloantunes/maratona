#include <iostream>
#include <cstring>

using namespace std;

int t[30][30];
int maxscore, score;
int my[] = {1,-1, -1,  1};
int mx[] = {1, 1, -1, -1};

void play(int x, int y){
	for (int i = 0; i < 4; ++i){
		if(t[ x + mx[i] ][ y + my[i] ] == 2 && t[ x + mx[i]*2 ][ y + my[i]*2 ] == 0){
			t[ x + mx[i] ][ y + my[i] ] = 0;
			t[ x + mx[i]*2 ][ y + my[i]*2 ] = 1;
			t[x][y] = 0;
			score++;
			maxscore =  max(maxscore, score);
			play(x + mx[i]*2, y + my[i]*2 );
			t[ x + mx[i] ][ y + my[i] ] = 2;
			t[ x + mx[i]*2 ][ y + my[i]*2 ] = 0;
			t[x][y] = 1;
			score--;
		}
	}
}

int main(){
	int m,n,p;

	while(cin >> n >> m, m+n){

		memset(t, -1, sizeof t);

		int l=1, c=1;		

		for (int i = 0; i < (m*n + 1)/2; ++i){			
			cin >> t[l][c];

			c += 2;
			if(c > m){				
				l++;
				c = l % 2 ? 1 : 2;
			}
		}

		maxscore = 0;
		score = 0;
		for (int i = 1; i <= n; ++i)
			for (int j = 1; j <= m; ++j)
				if(t[i][j] == 1)
					play(i,j);		

		cout << maxscore << endl;
	}
}