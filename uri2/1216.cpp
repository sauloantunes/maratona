#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){
	int d, n=0;
	double t=0;
	string s;

	while(getline(cin, s)){
		cin >> d;
		cin.get(); // \n end of line
		
		n++;
		t += d;
	}

	cout << fixed << setprecision(1) << t/n << endl;
}