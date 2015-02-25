#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	double l;

	cout << fixed << setprecision(6);

	while(cin >> l, l){
		double i = 1 + (l - 2) * 2;
		cout << (i-l)/l << endl;
	}	
}