#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, r;

	cin >> n;

	if(n == 1)
		r = 1;
	else if(n <= 3)
		r = 3;
	else if(n <= 5)
		r = 5;
	else if(n <= 10)
		r = 10;
	else if(n <= 25)
		r = 25;
	else if(n <= 50)
		r = 50;
	else
		r = 100;

	cout << "Top " << r << endl;
}