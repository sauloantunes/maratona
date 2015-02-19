#include <iostream>

using namespace std;

int main(){
	int n;
	int p=1, u=2, m=3;

	cin >> n;

	while(n--){
		cout << p << " " << u << " " << m << " PUM" << endl;
		p += 4;
		u += 4;
		m += 4;
	}
}