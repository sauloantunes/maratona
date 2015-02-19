#include <iostream>
#include <iomanip>
#include <cstdio>

using namespace std;

int main(){
	int n;
	cin >> n;

	if(!n)
		return 0;

	while(--n)
		cout << "Ho ";
	
	cout << "Ho!" << endl;
}