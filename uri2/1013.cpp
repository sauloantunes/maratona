#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int a,b,c;
	int m;

	cin >> a >> b >> c;

	m = (a+b +abs(a-b))/2;
	m = (m+c +abs(m-c))/2;

	cout << m << " eh o maior" << endl;
}