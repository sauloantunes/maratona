#include <bits/stdc++.h>

using namespace std;

int p[7][7];
int m[9][10];
int t[9][10];
int solved;

bool mark(int i, int j){
	if(j > 8)
		return false;

	if(i > 7)
		return false;

	return t[i][j];
}

void solve(int i, int j){
	if(i > 7)
		solved++;

	if(j > 8)
		return solve(i+1, 1);

	if(mark(i,j))
		return solve(i, j+1);

	if(!mark(i,j+1)){
		int a = m[i][j];
		int b = m[i][j+1];

		if(!p[a][b]){
			p[a][b] = p[b][a]   = 1;
			t[i][j] = t[i][j+1] = 1;

			solve(i, j+2);

			p[a][b] = p[b][a]   = 0;
			t[i][j] = t[i][j+1] = 0;
		}
	}

	if(!mark(i+1, j)){
		int a = m[i][j];
		int b = m[i+1][j];

		if(!p[a][b]){
			p[a][b] = p[b][a]   = 1;
			t[i][j] = t[i+1][j] = 1;

			solve(i, j+1);

			p[a][b] = p[b][a]   = 0;
			t[i][j] = t[i+1][j] = 0;
		}
	}
}


int main(){
	int n, cont=1;

	cin >> n;

	while(n--){
		for (int i = 1; i <= 7; ++i)
			for (int j = 1; j <= 8; ++j)
				scanf("%d", &m[i][j]);

		memset(p, 0, sizeof p);
		memset(t, 0, sizeof t);
		solved = 0;
		solve(1,1);

		cout << "Teste " << cont++ << endl;
		cout << solved << endl << endl;
	}
}