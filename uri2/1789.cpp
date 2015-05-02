#include <iostream>
#include <iomanip>
#include <cstdio>

using namespace std;

int main(){
	int l, v, f;

	while(cin >> l){
		f = 0;
		while(l--){
			cin >> v;
			f = max(f,v);
		}

		if(f < 10)
			cout << 1 << endl;
		else 
			if(f >= 20)
				cout << 3 << endl;
			else
				cout << 2 << endl;
	}
}
