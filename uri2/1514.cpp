#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstring>

using namespace std;

int main(){
	int m,n;

	while(cin >> n >> m, m+n){
		int users[n], prob[m], t;
		int a,b,c,d;		
		a = b = c = d = 1;

		memset(users, 0, sizeof users);
		memset(prob, 0, sizeof prob);

		for (int i = 0; i < n; ++i){
			for (int j = 0; j < m; ++j){
				cin >> t;
				prob[j] += t;
				users[i] += t;
			}
		}
		
		for (int i = 0; i < n; ++i)
			if(users[i] == m){
				a = 0;
				break;
			}
		
		for (int i = 0; i < m; ++i)
			if(prob[i] == 0){
				b = 0;
				break;
			}
		
		for (int i = 0; i < m; ++i)
			if(prob[i] == n){
				c = 0;
				break;
			}

		for (int i = 0; i < n; ++i)
			if(users[i] == 0){
				d = 0;
				break;
			}

		cout << a+b+c+d << endl;
	}
}
