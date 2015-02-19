#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	float n,t=0;
	int i = 2;

	while(i){
		cin >> n;

		if(n >= 0 && n <= 10){
			t += n;
			i--;
		} else
			cout << "nota invalida" << endl;
	}

	cout << fixed << setprecision(2) << "media = " << t/2 << endl;

}