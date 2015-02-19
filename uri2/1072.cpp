#include <iostream>

using namespace std;

int main(){
	int n, m, in=0, out=0;

	cin >> n;

	while(n--){
		cin >> m;

		if(m >= 10 && m <= 20)
			in++;
		else
			out++;
	}

	cout << in  << " in"  << endl;
	cout << out << " out" << endl;
}