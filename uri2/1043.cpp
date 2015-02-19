#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	float a,b,c, mi, ma, m;

	cin >> a >> b >> c;

	mi = min( min(a,b), c);
	ma = max( max(a,b), c);
	m = a + + b + c - mi - ma;

	cout << fixed << setprecision(1);

	if(mi + m > ma)
		cout << "Perimetro = " << a + b + c << endl;
	else
		cout << "Area = " << (a+b)*c/2 << endl;

}