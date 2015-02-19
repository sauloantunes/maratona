#include <iostream>

using namespace std;

int main(){
	int n,p,v;

	v = 0;

	for (int i = 1; i <= 100; ++i){
		cin >> n;

		if(n > v){
			v = n;
			p = i;
		}
	}
	
	cout << v << endl;
	cout << p << endl;

}	