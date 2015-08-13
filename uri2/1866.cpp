#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, x;

	cin >> n;

	while(n--){
		cin >> x;
		if(x & 1)
			cout << "1\n";
		else
			cout << "0\n";
	}
}