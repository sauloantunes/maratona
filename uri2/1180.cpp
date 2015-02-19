#include <iostream>
#include <iomanip>
#include <cstdio>
#include <climits>

using namespace std;

int main(){
	int n,a;
	int menor=INT_MAX, pos=-1;

	cin >> n;

	for (int i = 0; i < n; ++i){		
		cin >> a;
		if(a < menor){
			menor = a;
			pos = i;
		}
	}

	cout << "Menor valor: " << menor << endl;
	cout << "Posicao: " << pos << endl;
}