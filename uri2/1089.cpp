#include <iostream>

using namespace std;

int main(){
	int n,a,b,c;

	while(cin >> n, n){

		int v[n+2];
		int p=0, s;

		for (int i = 0; i < n; ++i)
			cin >> v[i];
		
		v[n]   = v[0];
		v[n+1] = v[1];

		s = v[1] > v[0] ? 1 : 0;

		for (int i = 0; i < n+1; ++i){
			if(v[i+1] > v[i] == s)
				continue;

			s = !s;
			p++;
		}

		cout << p << endl;
	}
}