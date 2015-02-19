#include <iostream>
#include <iomanip>
#include <cstdio>

using namespace std;

int main(){
	int n[1000], v;

	cin >> v;

	for (int i = 0; i < 1000; ++i)
		printf("N[%d] = %d\n", i, i%v);
}