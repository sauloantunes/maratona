#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, q, s=0;

	cin >> n;

	for (int i = 0; i < n; ++i){
		cin >> q;
		if(q)
			s--;
		else
			s++;
	}
		
	if(s > 0)
		cout <<  "Y" << endl;
	else
		cout <<  "N" << endl;
}