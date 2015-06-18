#include <bits/stdc++.h>

#define PI 3.141592654

using namespace std;

int main(){
	double a, d, h;

	while(cin >> a >> d >> h)
		cout << fixed << setprecision(2) <<  (d * tan(a * PI / 180) + h) * 5 << endl;
}