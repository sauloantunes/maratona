#include <iostream>

using namespace std;

int main(){
	int q,d,p,r;

	while(cin >> q, q){
		cin >> d >> p;

		r =  p*q*d / (p -q);

		if(r == 1)
			cout << r << " pagina" << endl;
		else
			cout << r << " paginas" << endl;
	}
}