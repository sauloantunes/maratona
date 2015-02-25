#include <iostream>
#include <cstring>

using namespace std;


int main(){
	int t,c,l,p;

	cin >> t;

	while(t--){
		cin >> l >> c;

		char m[l][c];

		for (int i = 0; i < l; ++i)
			for (int j = 0; j < c; ++j)
				cin >> m[i][j];

		cin >> p;

		while(p--){
			string s;
			cin >> s;
			int w=0, a=1, aux[l][c];
			memset(aux, 0, sizeof aux);

			for (int i = 0; i < l; ++i){
				for (int j = 0; j < c; ++j){
					if(m[i][j] == s[0]){
						//horizontal
						for (int k = 0; k < s.size(); ++k){
							if(j+k >= c)
								break;
							if(m[i][j+k] != s[k])
								break;
							if(k == s.size()-1 && (aux[i][j] != aux[i][j+k]  ||  aux[i][j] + aux[i][j+k] == 0)){
								for (int x = 0; x < s.size(); ++x)
									aux[i][j+x] = a;
								a++;
								w++;								
							}
						}

						//vertical
						for (int k = 0; k < s.size(); ++k){
							if(i+k >= l)
								break;
							if(m[i+k][j] != s[k])
								break;
							if(k == s.size()-1 && (aux[i][j] != aux[i+k][j]  ||  aux[i][j] + aux[i+k][j] == 0)){
								for (int x = 0; x < s.size(); ++x)
									aux[i+x][j] = a;
								a++;
								w++;
							}
						}
					}
				}
			}	

			cout << w << endl;
		}
	}
}



























/*
						//search hor left
						for (int k = 0; k < s.size(); ++k){
							if(j-k < 0)
								break;
							if(m[i][j-k] != s[k])
								break;
							if(k == s.size()-1 && (aux[i][j] != aux[i][j-k]  ||  aux[i][j] + aux[i][j-k] == 0)){
								for (int x = 0; x < s.size(); ++x)
									aux[i][j-x] = a;
								a++;
								w++;
							}
						}	
						//search ver up
						for (int k = 0; k < s.size(); ++k){
							if(j-k < 0)
								break;
							if(m[i-k][j] != s[k])
								break;
							if(k == s.size()-1 && (aux[i][j] != aux[i-k][j]  ||  aux[i][j] + aux[i-k][j] == 0)){
								for (int x = 0; x < s.size(); ++x)
									aux[i-x][j] = a;
								a++;
								w++;
							}
						}
						*/	
