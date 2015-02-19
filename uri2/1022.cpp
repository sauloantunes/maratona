#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int mdc (int a, int b){
	return b ? mdc(b, a % b) : abs(a);
}

int main(){
	int n1,d1,n2,d2,n,a,b;
	char c;

	cin >> n;

	while(n--){
		scanf("%D / %d %c %d / %d", &n1, &d1, &c, &n2, &d2);
		
		switch(c){
			case '+' : a = n1*d2 + n2*d1;
					   b = d1*d2;
					   break;

			case '-' : a = n1*d2 - n2*d1;
					   b = d1*d2;
					   break;
					   			 
			case '*' : a = n1*n2;
					   b = d1*d2;
					   break;

			case '/' : a = n1*d2;
					   b = n2*d1;
					   break;
					   			   
		}

		int m = mdc(a,b);

		cout << a << "/" << b << " = " << a/m << "/" << b/m << endl;
	}
}