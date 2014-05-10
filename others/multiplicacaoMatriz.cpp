#include <iostream>
#include <cstring>
#include <climits>
using namespace std;

#define N 4 // Número de matrizes
#define INF INT_MAX


int M[N+1][N+1];
int P[N+1] = {30,5,10,10,30};
int S[N+1][N+1]; // Armazena onde deve ser colocado o parenteses


int main(){
	memset(M,0,sizeof(M));

	for (int i = 1; i <= N; ++i){
		M[i][i] = 0; // Diagonal
	}

	for (int t = 1; t <= N; ++t){
		int i = 1;
		int j = t;
		while(j <= N){
			M[i][j] = 9999999;
			M[i][i] = 0;
			for (int k = i; k < j; ++k){
				M[i][j] = min(M[i][j], M[i][k] + M[k+1][j] + P[i-1] * P[k] * P[j] );
			}
		
			j++;
			i++;
		}
	}
	cout << M[1][4];
	

}