#include <iostream>
#include <iomanip>
#include <cstdio>

using namespace std;

int main(){
	int n;

	while(cin >> n){
		if(n)
			cout << "vai ter duas!" << endl;
		else
			cout << "vai ter copa!" << endl;
	}
}