#include <iostream>

using namespace std;

int main(){
	int n;

	cin >> n;

	while(n--){
		int x,s=0;

		cin >> x;

		for (int i = 1; i < x; ++i)
			if(x % i == 0)
				s += i;
		
		if(s == x)
			cout << x << " eh perfeito" << endl;
		else
			cout << x << " nao eh perfeito" << endl;
	}
}