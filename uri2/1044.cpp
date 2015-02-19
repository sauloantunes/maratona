#include <iostream>

using namespace std;

int main(){
	int a, b, ma, me;

	cin >> a >> b;

	ma = max(a,b);
	me = min(a,b);

	if(ma % me)
		cout << "Nao sao Multiplos" << endl;
	else
		cout << "Sao Multiplos" << endl;
}