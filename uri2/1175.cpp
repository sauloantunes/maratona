#include <iostream>
#include <iomanip>
#include <cstdio>

using namespace std;

int main(){
	int v[20];

	for (int i = 19; i >= 0; i--){
		cin >> v[i];
	}

	for (int i = 0; i < 20; ++i){
		printf("N[%d] = %d\n", i, v[i]);
	}
}