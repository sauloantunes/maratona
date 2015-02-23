#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int n,a,b;

	while(cin >> n, n){
		int sa=0, sb=0;

		while(n--){
			cin >> a >> b;

			if(a > b)
				sa++;
			if(b > a)
				sb++;
		}

		printf("%d %d\n", sa,sb);
	}
}