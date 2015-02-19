#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int a, n;

	cin >> a;

	while(cin >> n, n <= 0){}

	int sum = 0;
	for (int i = a; i < a + abs(n); ++i)
		sum += i;

	cout << sum << endl;		
}