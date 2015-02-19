#include <iostream>

using namespace std;

int main(){
	int x,y;

	cin >> x >> y;

	int me = min(x,y);
	int ma = max(x,y);

	for (int i = me+1; i < ma; ++i){
		if( i % 5 == 2 || i % 5 == 3)
			cout << i << endl;
	}
}