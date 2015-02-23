#include <iostream>

using namespace std;

int main(){
	int a,b,n;

	cin >> n;

	while(n--){
		cin >> a >> b;
		cout << a*b/2 << " cm2" << endl;
	}
}