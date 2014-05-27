#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

double c;

int main(){
	double d;
	c = sin(108*M_PI / 180) / sin(63*M_PI / 180);
	while(cin >> d)
		printf("%.10f\n", d*c);
}