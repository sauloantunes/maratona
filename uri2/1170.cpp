#include <iostream>

using namespace std;

int main(){
	int n;
	float f;

	cin >> n;

	while(n--){
		cin >> f;
		int d = 0;

		while(f > 1){
			f /= 2;
			d++;
		}
		
		cout << d << " dias" << endl;
	}
}