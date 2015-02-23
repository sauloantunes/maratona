#include <iostream>
#include <algorithm>

using namespace std;

int gcd(int a, int b){
	return b ? gcd(b, a%b) : abs(a);
}

int main(){
	int v[3];

	while(cin >> v[0] >> v[1] >> v[2]){
		sort(v,v+3);

		if(v[0]*v[0] + v[1]*v[1] != v[2]*v[2]){
			cout << "tripla" << endl;
			continue;
		}

		if(gcd(v[0],v[1]) == 1 && gcd(v[1],v[2]) == 1)
			cout << "tripla pitagorica primitiva" << endl;
		else
			cout << "tripla pitagorica" << endl;
	}
}