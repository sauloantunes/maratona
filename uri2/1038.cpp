#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int a, b;
	float v[] = {4.00, 4.50, 5.00, 2.00, 1.50};

	cin >> a >> b;

	cout << fixed << setprecision(2);
	cout << "Total: R$ " << v[a-1] * b << endl;

}