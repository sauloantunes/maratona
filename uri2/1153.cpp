#include <iostream>

using namespace std;

int main(){
	int n,f=0;

	cin >> n;
	f = n--;

	while(n)
		f = f*n--;

	cout << f << endl;
}