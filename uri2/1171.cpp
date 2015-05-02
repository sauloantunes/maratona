#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstring>

using namespace std;

int v[2001];

int main(){
	int n, x;

	cin >> n;
	memset(v, 0, sizeof v);

	while(n--){
		cin >> x;
		v[x]++;
	}

	for (int i = 0; i < 2001; ++i)
		if(v[i])
			cout << i << " aparece " << v[i] << " vez(es)" << endl;	
}
