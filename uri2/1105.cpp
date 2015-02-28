#include <iostream>
#include <cstring>

using namespace std;

int main(){
	int b,c,d,n,v;

	while(cin >> b >> n, b + n){
		int res[b+1];

		for (int i = 0; i < b; ++i)
			cin >> res[i+1];
		
		for (int i = 0; i < n; ++i){
			cin >> d >> c >> v;
			res[d] -= v;
			res[c] += v;
		}

		char s = 'S';

		for (int i = 1; i < b+1; ++i)
			if(res[i] < 0){
				s = 'N';
				break;
			}
				
		cout << s << endl;
	}
}