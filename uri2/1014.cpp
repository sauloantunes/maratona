#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int d;
	float l;

	cin >> d >> l;
	cout << fixed << setprecision(3);
	cout << d/l << " km/l" << endl;
}