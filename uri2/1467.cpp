#include <iostream>

using namespace std;

int main(){
	int a,b,c;

	while(cin >> a >> b >> c){
		if(a != b && b == c)
			cout << "A" << endl;

		if(b != a && a == c)
			cout << "B" << endl;
		
		if(c != a && a == b)
			cout << "C" << endl;

		if(a == b && b == c)
			cout << "*" << endl;
	}
}