#include <iostream>
#include <iomanip>
#include <cstdio>

using namespace std;

int main(){
	double n;

	cin >> n;

	cout << fixed << setprecision(4);
	
	for (int i = 0; i < 100; ++i){
		cout << "N[" << i << "] = " << n << endl;
		n /= 2;
	}
}