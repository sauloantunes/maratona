#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int n,h;
	float v;

	cin >> n >> h >> v;

	cout << fixed << setprecision(2);
	cout << "NUMBER = " << n << endl;
	cout << "SALARY = U$ " << h*v << endl;
}