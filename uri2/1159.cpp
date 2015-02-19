#include <iostream>

using namespace std;

int main(){
	int x;

	while(cin >> x, x){
		int s=0, i=5;
		
		if(x % 2)
			x++;

		while(i--){
			s += x;
			x += 2;
		}

		cout << s << endl;

	}
}