#include <bits/stdc++.h>

using namespace std;

int main(){
	int v[181];
	memset(v, 0, sizeof v);

	for (int i = 0; i < 720; ++i){
		int m = (i % 60) * 6;
		int h = (i / 60) * 30;
		int a = abs(m - h);

		v[ min(a, 360 - a)] = 1;
	}

	int n;
	while(cin >> n){
		if(v[n])
			cout << "Y" << endl;
		else
			cout << "N" << endl;
	}
}