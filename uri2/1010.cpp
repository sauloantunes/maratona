#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int c,q1,q2;
	float v1,v2;

	cin >> c >> q1 >> v1;
	cin >> c >> q2 >> v2;

	cout << fixed << setprecision(2);

	cout << "VALOR A PAGAR: R$ " << q1*v1 + q2*v2 << endl;
}