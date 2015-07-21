#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, s;

	cin >> n;

	while(n--){
		cin >> s;
		int v[s];

		for (int i = 0; i < s; ++i)
			cin >> v[i];
		
		string jumps;
		cin >> jumps;

		int hits=0;
		for (int i = 0; i < jumps.size(); ++i){
			if(jumps[i] == 'J' && v[i] > 2)
				hits++;

			if(jumps[i] == 'S' && v[i] <= 2)
				hits++;
		}

		cout << hits << endl;
	}
}