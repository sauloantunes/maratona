#include <iostream>
#include <iomanip>
#include <cstdio>

using namespace std;

int calls;

int fib(int n){
	calls++;
	if(n == 0)
		return 0;

	if(n == 1)
		return 1;

	return fib(n-1) + fib(n-2);
}

int main(){
	int f,n,x;
	cin >> n;
	while(n--){
		cin >> x;
		calls = 0;
		f = fib(x);
		printf("fib(%d) = %d calls = %d\n", x, calls-1, f);
	}
}
