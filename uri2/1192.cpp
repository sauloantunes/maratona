#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, a, b;
	char c;

	cin >> n;

	while(n--){
		scanf("%d%c%d", &a, &c, &b);

		if(a == b)
			cout << a*b << endl;
		else 
			if(c < 'a')
				cout << b - a << endl;
			else
				cout << a + b << endl;
	}
}