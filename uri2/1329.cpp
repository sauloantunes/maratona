#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int n,j,m;
	int a;

	while(cin >> n, n){
		j = 0;
		m = 0;
		while(n--){
			cin >> a;
			if(a)
				j++;
			else
				m++;
		}

		printf("Mary won %d times and John won %d times\n", m,j);
	}
}