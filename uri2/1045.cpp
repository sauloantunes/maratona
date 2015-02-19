#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	double v[3];

	cin >> v[0] >> v[1] >> v[2];

	sort(v,v+3);
	reverse(v, v+3);

	if(v[0] >= v[1] + v[2]){
		cout << "NAO FORMA TRIANGULO" << endl;
		return 0;
	}

	if(v[0]*v[0] == v[1]*v[1] + v[2]*v[2])
		cout << "TRIANGULO RETANGULO" << endl;

	if(v[0]*v[0] > v[1]*v[1] + v[2]*v[2])
		cout << "TRIANGULO OBTUSANGULO" << endl;

	if(v[0]*v[0] < v[1]*v[1] + v[2]*v[2])
		cout << "TRIANGULO ACUTANGULO" << endl;

	if(v[0] == v[1] && v[0] == v[2])
		cout << "TRIANGULO EQUILATERO" << endl;
	else
		if(v[0] == v[1] || v[1] == v[2])
			cout << "TRIANGULO ISOSCELES" << endl;
}