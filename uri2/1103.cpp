#include <iostream>

using namespace std;

int main(){
	int m1, h1, m2, h2;

	while(cin >> h1 >> m1 >> h2 >> m2, m1+m2+h1+h2){
		int t1,t2;

		t1 = 60*h1 + m1;
		t2 = 60*h2 + m2;

		if(t2 < t1)
			cout << 24*60 - t1 + t2 << endl;
		else
			cout << t2 - t1 << endl;
	}
}