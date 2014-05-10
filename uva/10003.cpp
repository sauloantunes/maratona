#include <iostream>
#include <cstring>
using namespace std;

int cuts, len;
int V[52];
int T[52][52];

int main(){
	while(cin >> len, len){
		memset(T,0,sizeof(T));

		cin >> cuts;
		V[0] = 0;
		V[cuts + 1] = len;


		for (int i = 1; i <= cuts; ++i)
			cin >> V[i];

		for (int c = 0; c < cuts; ++c){
			int i = 0;
			int j = c + 2;
			while(j <= cuts+1){
				T[i][j] = 99999999;

				for (int k = i+1; k <= j-1; ++k)
					T[i][j] = min(T[i][j], T[i][k] + T[k][j] + V[j] - V[i]);

				i++;
				j++;
			}
		}
		cout << "The minimum cutting is " << T[0][cuts+1] << "." << endl;	

	}
}