#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int n, s=0, i=0;

	while(cin >> n, n>0){
		s += n;
		i++;
	}

	cout << fixed << setprecision(2) << (float)s/i << endl;
}