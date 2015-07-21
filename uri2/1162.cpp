#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;

	cin >> n;

	while(n--){
		int t;
		cin >> t;
		int v[t+1];

		for (int i = 1; i <= t; ++i)
			cin >> v[i];
		
		int s = 0;

		for (int i = 1; i <= t; ++i){
			int j = 1;
			while(i != v[j])
				j++;

			while(j != i){
				swap(v[j], v[j-1]);
				j--;
				s++;
			}

		}

		cout << "Optimal train swapping takes " << s << " swaps." << endl;
	}
}