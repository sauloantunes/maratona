#include <iostream>
#include <iomanip>
#define PI           3.14159

using namespace std;

int main(){
	double f;
	cout << fixed << setprecision(4);

	cin >> f;

	cout << "A=" << PI * f * f << endl;
}