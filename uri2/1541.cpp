#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){
	int a, b, c;

	while(cin >> a, a){
		cin >> b >> c;

		cout << (int) sqrt(100*a*b/c) << endl;
	}
}