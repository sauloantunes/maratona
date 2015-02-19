#include <iostream>

using namespace std;

int primo(int x){
	for (int i = 2; i < x; ++i)
		if(x % i == 0)
			return 0;
	return 1;
}

int main(){
	int n;

	cin >> n;

	while(n--){
		int x;

		cin >> x;

		if(primo(x))
			cout << x << " eh primo" << endl;
		else
			cout << x << " nao eh primo" << endl;
	}
}