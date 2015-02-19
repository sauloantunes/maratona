#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
	float a,b,c;


	cout << fixed << setprecision(5);
	cin >> a >> b >> c;

	float d = b * b - 4 * a * c;

	if(d < 0 || a == 0)
		cout << "Impossivel calcular" << endl;
	else{
		cout << "R1 = " << (-b + sqrt(d)) / (2 * a) << endl;
		cout << "R2 = " << (-b - sqrt(d)) / (2 * a) << endl;
	}
}