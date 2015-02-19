#include <iostream>

using namespace std;

int main(){
	int inter=0, gremio=0, draw=0, a=1, c=0, x,y;

	while(a != 2){
		cin >> x >> y;
		
		if( x > y )
			inter++;
		if( y > x )
			gremio++;
		if( x == y)
			draw++;

		c++;

		cout << "Novo grenal (1-sim 2-nao)" << endl;
		cin >> a;
	}

	cout << c << " grenais" << endl;
	cout << "Inter:" << inter << endl;
	cout << "Gremio:" << gremio << endl;
	cout << "Empates:" << draw << endl;

	if( inter > gremio )
		cout << "Inter venceu mais" << endl;
	if( gremio > inter )
		cout << "Gremio venceu mais" << endl;
	if( inter == gremio)
		cout << "Nao houve vencedor" << endl;

}