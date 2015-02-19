#include <iostream>

using namespace std;

int main(){
	int x,y,s=0;

	cin >> x >> y;

	int me, ma;

	me = min(x,y);
	ma = max(x,y);

	if(me % 2)
		me += 2;
	else
		me += 1;

	if(ma % 2)
		ma -= 2;
	else
		ma -= 1;

	for (int i = me; i <= ma; i += 2)
		s += i;
	
	cout << s << endl;
}