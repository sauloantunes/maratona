#include <iostream>

using namespace std;

int main(){
	int x,y;

	cin >> x >> y;

	int me = min(x,y);
	int ma = max(x,y);
	int sum = 0;

	for (int i = me; i <= ma; ++i)
		if(i % 13)
			sum += i;
	
	cout << sum << endl;
}