#include <iostream>
#include <iomanip>
#include <cstdio>

using namespace std;

int main(){
	float a;

	for (int i = 0; i < 100; ++i){
		cin >> a;
		if(a <= 10)
			cout << "A[" << i << "] = " << a << endl;
	}
}