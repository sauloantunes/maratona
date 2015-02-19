#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int a,b,c;
	int me, m, ma;

	cin >> a >> b >> c;

	me = min( min(a,b), c);
	ma = max( max(a,b), c);
	m = a + b + c - me - ma;

	cout << me << endl;
	cout << m << endl;
	cout << ma << endl;

	cout << endl;

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;

}