#include <iostream>

using namespace std;

int main(){
	int x,y,n;

	cin >> n;

	while(n--){
		cin >> x >> y;
		int s=0;

		if(x % 2 == 0)
			x++;

		while(y){
			s += x;
			x += 2;				
			y--;
		}

		cout << s << endl;
	}
}