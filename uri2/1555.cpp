#include <iostream>

using namespace std;

int main(){
	int n,x,y;

	cin >> n;

	while(n--){
		cin >> x >> y;

		int r = 9*x*x + y*y;
		int b = 2*x*x + 25*y*y;
		int c = -100*x + y*y*y;

		if(b > r && b > c)
			cout << "Beto ganhou" << endl;

		if(c > r && c > b)
			cout << "Carlos ganhou" << endl;

		if(r > b && r > c)
			cout << "Rafael ganhou" << endl;
	}
}