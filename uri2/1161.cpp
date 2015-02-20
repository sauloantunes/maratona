#include <iostream>

using namespace std;

int main(){
	int m, n;
	long long f[21];

	f[0] = 1;
	for (int i = 1; i < 21; ++i)
		f[i] = f[i-1] * i;
	

	while(cin >> m >> n){
		cout << f[m] + f[n] << endl;
	}
}