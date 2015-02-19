#include <iostream>

using namespace std;

int main(){
	int n,a,b,c;

	cin >> n;

	a = 0;
	b = 1;

	cout << "0";

	for (int i = 0; i < n-1; ++i){
		cout << " " << b;
		c = a + b;
		a = b;
		b = c;
	}

	cout << endl;

}