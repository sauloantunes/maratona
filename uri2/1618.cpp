#include <iostream>

using namespace std;

int main(){
	int n, Ax, Ay, Bx, By, Cx, Cy, Dx, Dy, Rx, Ry;

	cin >> n;

	while(n--){
		cin >> Ax >> Ay >> Bx >> By >> Cx >> Cy >> Dx >> Dy >> Rx >> Ry;
		//Ax > Rx && 
		if(Ax <= Rx && Rx <= Bx  &&  Ay <= Ry && Ry <= Dy)
			cout << 1 << endl;
		else
			cout << 0 << endl;
	}
}