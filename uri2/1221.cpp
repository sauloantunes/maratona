#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n){
	if(n == 2)
		return true;

	if(n % 2 == 0)
		return false;

	for (int i = 3; i < sqrt(n); i += 2){
		if(n % i == 0)
			return false;
	}

	return true;
}

int main(){
	int m, n;

	cin >> n;

	while(n--){
		cin >> m;

		if(isPrime(m))
			cout << "Prime" << endl;
		else
			cout << "Not Prime" << endl;
	}
}