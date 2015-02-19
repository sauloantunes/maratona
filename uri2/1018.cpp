#include <iostream>

using namespace std;

int main(){
	int v;
	int n[] = {100,50,20,10,5,2,1};

	cin >> v;

	cout << v << endl;
	for (int i = 0; i < 7; ++i){	
		cout << v/n[i] << " nota(s) de R$ " << n[i] << ",00" << endl;
		v -= (v/n[i]) * n[i];		
	}		
}