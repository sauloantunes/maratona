#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){
	string n;
	double s,v;

	cin >> n;
	cin >> s >> v;

	cout << fixed << setprecision(2);

	cout << "TOTAL = R$ " << s + 0.15*v << endl;

}