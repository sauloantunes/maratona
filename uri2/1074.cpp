#include <iostream>

using namespace std;

int main(){
	int n,m;

	cin >> n;

	while(n--){
		cin >> m;

		if(m == 0){
			cout << "NULL" << endl;
			continue;
		}

		if(m % 2)
			cout << "ODD ";
		else
			cout << "EVEN ";

		if(m > 0)
			cout << "POSITIVE" << endl;
		else
			cout << "NEGATIVE" << endl;
	}
}