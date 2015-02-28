#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int k,m,n,x,y;

	while(cin >> k, k){
		cin >> m >> n;
		while(k--){
			cin >> x >> y;

			if(x == m || y == n)
				cout << "divisa" << endl;

			if(x > m && y > n)
				cout << "NE" << endl;

			if(x < m && y > n)
				cout << "NO" << endl;
		
			if(x < m && y < n)
				cout << "SO" << endl;
		
			if(x > m && y < n)
				cout << "SE" << endl;
		}
	}
}