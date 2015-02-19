#include <iostream>

using namespace std;

int main(){
	int x,z;

	cin >> x;

	while(cin >> z, z <= x){}

	int s=0, i=0;

	while(s <= z){
		s += x;
		x++;
		i++;
	}

	cout << i << endl;
}