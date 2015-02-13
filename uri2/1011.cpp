#include <iostream>
#include <iomanip>

#define pi 3.14159

using namespace std;

int main(){
	int r;

	cin >> r;

	cout << fixed << setprecision(3);
	cout << "VOLUME = " << (4/3.0) * pi * r*r*r << endl;
}