#include <bits/stdc++.h>

using namespace std;

double area(double l){

	double area = l*l * sqrt(3)/4;
	double total = area;

	for (int i = 0; i < 100; ++i){
		l = l/3.0;
		area = l*l * sqrt(3)/4;
		total += area * pow(2,i*2) * 3;
	}

	return total;
}

int main(){
	double l;

	while(cin >> l){
		cout << fixed << setprecision(2) << area(l) << endl;
	}
}