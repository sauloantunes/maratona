//09:18
//09:36

#include <cstdio>
#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int n,qt,s,m,g,x;

	cin >> n;

	while(n--){
		cin >> qt >> s;
		m = 9999;
		for (int i = 1; i <= qt; ++i){
			cin >> x;
			x = abs(s-x);
			if(x < m){
				m = x;
				g = i;
			}
		}
		cout << g << endl;
	}
}