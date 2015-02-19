#include <iostream>

using namespace std;

int main(){
	int a,b,c,d,mi,mf;

	cin >> a >> b >> c >> d;

	mi = 60 * a + b;
	mf = 60 * c + d;

	if(mf <= mi)
		d = 24 * 60 - mi + mf;
	else
		d = mf - mi;

	cout << "O JOGO DUROU " << d / 60 << " HORA(S) E " << d % 60 << " MINUTO(S)" << endl;
}