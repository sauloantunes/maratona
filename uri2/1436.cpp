#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
	int n;

	cin >> n;

	for (int i = 1; i <= n; ++i){
		int c;
		cin >> c;
		int v[c];

		for (int j = 0; j < c; ++j)
			cin >> v[j];

		sort(v,v+c);

		printf("Case %d: %d\n", i,v[c/2]);
	}
}