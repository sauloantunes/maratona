#include <iostream>

using namespace std;

int main(){
	int n,x,y;

	cin >> n;

	while(n--){
		cin >> x >> y;

		int me = min(x,y);
		int ma = max(x,y);

		if(me % 2)
			me += 2;
		else
			me += 1;

		int s = 0;

		for (int i = me; i < ma; i += 2)
			s += i;

		cout << s << endl;	
		
	}
}