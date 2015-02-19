#include <iostream>

using namespace std;

int main(){
	int x,i=0;

	while(i < 10){
		cin >> x;

		if(x <= 0)
			x = 1;

		cout << "X[" << i++ << "] = " << x << endl;
	}
}