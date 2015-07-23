#include <bits/stdc++.h>

using namespace std;

int main(){
	int a, d;

	while(cin >> a >> d, a+d){
		int va[a], vd[d];

		for (int i = 0; i < a; ++i)
			cin >> va[i];

		for (int i = 0; i < d; ++i)
			cin >> vd[i];
		
		sort(va, va+a);
		sort(vd, vd+d);

		if(va[0] >= vd[1])
			cout << "N" << endl;
		else
			cout << "Y" << endl;
	}
}