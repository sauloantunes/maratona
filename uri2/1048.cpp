#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	float s,r;
	int a;

	cin >> s;

	if(s >= 0 && s <= 400.00){
		r = s * 0.15;
		a = 15;
	}

	if(s >= 400.01 && s <= 800.00){
		r = s * 0.12;
		a = 12;
	}

	if(s >= 800.01 && s <= 1200.00){
		r = s * 0.10;
		a = 10;
	}

	if(s >= 1200.01 && s <= 2000.00){
		r = s * 0.07;
		a = 7;
	}

	if(s > 2000){
		r = s * 0.04;
		a = 4;
	}

	cout << fixed << setprecision(2);

	cout << "Novo salario: "   << s + r << endl;
	cout << "Reajuste ganho: " << r << endl;
	cout << "Em percentual: " << a << " %" << endl;
}