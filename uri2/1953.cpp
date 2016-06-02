#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;

	while(cin >> n){
		int num, epr=0, ehd=0, others=0;
		string code;

		for (int i = 0; i < n; ++i){
			cin >> num >> code;

			if(code == "EPR")
				epr++;
			else if(code == "EHD")
				ehd++;
			else
				others++;
		}

		cout << "EPR: " << epr << endl;
		cout << "EHD: " << ehd << endl;
		cout << "INTRUSOS: " << others << endl;
	}
}