#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int t,s;

	cin >> t >> s;

	cout << fixed << setprecision(3);
	cout << t * s / 12.0 << endl;
}