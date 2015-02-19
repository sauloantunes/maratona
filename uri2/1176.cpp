#include <iostream>
#include <iomanip>
#include <cstdio>

using namespace std;

int main(){
	int n, a;
	long long f[61];

	f[0] = 0;
	f[1] = 1;

	for (int i = 2; i <= 60; ++i)
		f[i] = f[i - 1] + f[i-2];

	cin >>  n;

	while(n--){
		cin >> a;
		printf("Fib(%d) = %lld\n", a, f[a]);
	}
}