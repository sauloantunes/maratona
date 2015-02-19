#include <iostream>

using namespace std;

int main(){
	int a = 1, b = 60;

	while(b >= 0){
		cout << "I=" << a << " J=" << b << endl;
		a += 3;
		b -= 5;
	}
}