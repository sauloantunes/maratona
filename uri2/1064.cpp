#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	float f,s = 0;
	int c = 0;

	for (int i = 0; i < 6; ++i){
		cin >> f;

		if(f > 0){
			s += f;
			c++;
		}
	}

	cout << c << " valores positivos" << endl;
	cout << fixed << setprecision(1) << s/c << endl;

}