#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	float v;

	cout << fixed << setprecision(2);

	while(cin >> v){	
		if(v <= 2000)
			v = 0;

		if(v > 2000 && v <= 3000)
			v = (v - 2000) * 0.08;

		if(v > 3000 && v <= 4500)
			v = (v - 3000) * 0.18 + 80;

		if(v > 4500)
			v = (v - 4500) * 0.28 + 350;

		if(v)
			cout << "R$ " << v << endl;
		else
			cout << "Isento" << endl;
	}
}
