#include <iostream>
#include <iomanip>
#include <cstdio>

using namespace std;

int main(){
	int odd[5], even[5];
	int o=0, e=0, n;

	for (int i = 0; i < 15; ++i){
		cin >> n;
		if(n % 2)
			odd[o++] = n;
		else
			even[e++] = n;

		if(o == 5){
			for (int j = 0; j < 5; ++j)	
				printf("impar[%d] = %d\n", j, odd[j]);
			o = 0;
		}

		if(e == 5){
			for (int j = 0; j < 5; ++j)	
				printf("par[%d] = %d\n", j, even[j]);
			e = 0;
		}
	}

	for (int j = 0; j < o; ++j)	
		printf("impar[%d] = %d\n", j, odd[j]);

	for (int j = 0; j < e; ++j)	
		printf("par[%d] = %d\n", j, even[j]);

}