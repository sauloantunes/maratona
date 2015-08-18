#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;

	while(cin >> n, n){
		int maxEndingHere = 0;
		int maxSoFar = 0;
		int num;

		while(n--){
			cin >> num;
			maxEndingHere = max(0, maxEndingHere + num);
			maxSoFar = max(maxSoFar, maxEndingHere);
		}

		if(maxSoFar > 0)
			cout << "The maximum winning streak is " << maxSoFar <<".\n";
		else
			cout << "Losing streak.\n";
	}
}