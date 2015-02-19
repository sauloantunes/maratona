#include <iostream>
#include <iomanip>

using namespace std;

int main(){

	cout << fixed << setprecision(2);

	while(1){	
		int i = 2,o;
		float f, s=0;

		while(i){
			cin >> f;

			if(f >= 0 && f <= 10){
				i--;
				s += f;
			} else
				cout << "nota invalida" << endl;
		}

		cout << "media = " << s/2 << endl;

		while(1){
			cout << "novo calculo (1-sim 2-nao)" << endl;
			cin >> o;
			if(o == 1)
				break;
			if(o == 2)
				return 0;
		}

	}
}