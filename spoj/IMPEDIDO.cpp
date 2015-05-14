#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(){
	int a, d, j;

	while(cin >> a >> d, a+d){
			vector<int> va, vd;
			
			for (int i = 0; i < a; ++i){
				cin >> j;
				va.push_back(j);
			}
			
			for (int i = 0; i < d; ++i){
				cin >> j;
				vd.push_back(j);
			}

			sort(va.begin(), va.end());
			sort(vd.begin(), vd.end());

			if(va[0] < vd[1])
				cout << "Y" << endl;
			else			
				cout << "N" << endl;
	}
}
