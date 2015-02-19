#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int v;

	cin >> v;

	for (int i = 0; i < 10; ++i){
		printf("N[%d] = %d\n", i, v);
		v *= 2;
	}	
}