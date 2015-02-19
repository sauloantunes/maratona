#include <iostream>
#include <iomanip>
#include <cstdio>

using namespace std;

int main(){
	long int a,b,v;
	int n[] = {10000,5000,2000,1000,500,200};
	int m[] = {100,50,25,10,5,1};

	scanf("%d.%d",&a,&b);
	v = a*100 + b;

	cout << "NOTAS:" << endl;

	for (int i = 0; i < 6; ++i){	
		cout << v/n[i] << " nota(s) de R$ " << n[i]/100 << ".00" << endl;
		v -= (v/n[i]) * n[i];		
	}		

	cout << "MOEDAS:" << endl;

	for (int i = 0; i < 6; ++i){	
		cout << fixed << setprecision(2);
		cout << v/m[i] << " moeda(s) de R$ " << m[i]/100.2 << endl;
		v -= (v/m[i]) * m[i];		
	}		
}