#include <bits/stdc++.h>

using namespace std;

int main(){
	float d, vf, vg;

	while(cin >> d >> vf >> vg){
		float dist = sqrt(pow(d,2) + 144);

		if(dist/vg <= 12/vf)
			cout << "S" << endl;
		else
			cout << "N" << endl;
	}
}