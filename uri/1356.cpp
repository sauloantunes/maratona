#include <iostream>
#include <cmath>

using namespace std;

int hash(int i, int j, int b, int p, int* f){
	int soma = 0;
	for (int k = 0; k <= j-i; k++)
		soma += pow(b,k) * f[j-k];
	
	return soma % p;
}


int main(){
	while(1){
		int i, j, b, p;

		cin >> b >> p >> l >> n;

		if(b+p+l+n == 0)
			break;

		int f[l+1];

		for (i = 0; i < l+1
			; ++i)
			f[i] = 0;

		while(n--){

		}
	}

}