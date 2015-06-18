#include <bits/stdc++.h>

using namespace std;

int mdc(int a, int b){
	if(b)
		return mdc(b, a % b);
	else
		return abs(a); 
}

int main(){
	int n, a, b;

	cin >> n;

	while(n--){
		cin >> a >> b;

		cout << mdc(a, b) << endl;
	}
}