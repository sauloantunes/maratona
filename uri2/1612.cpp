#include <iostream>

using namespace std;

int main(){
	int n,t;

	cin >> n;

	while(n--){
		cin >> t;
		if(t%2)
			cout << t/2 + 1 << endl;
		else
			cout << t/2 << endl;
	}
}