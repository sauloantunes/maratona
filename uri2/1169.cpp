#include <iostream>

using namespace std;

int main(){
	int n,c;
	unsigned long long g;

	cin >> n;

	while(n--){
		cin >> c;
		g = 1;

		while(--c){	// Atencao no limite da variavel
			g = g*2; 
		}

		cout << g / 6000 << " kg" << endl;
	}
}
