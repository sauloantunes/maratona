#include <iostream>

using namespace std;

int main(){
	int m, n;

	while(cin >> m >> n, m != n){
		if(m > n)
			cout << "Decrescente" << endl;
		else
			cout << "Crescente" << endl;
	}
}