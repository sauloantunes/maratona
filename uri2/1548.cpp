#include <bits/stdc++.h>

using namespace std;

bool sortr(pair<int, int> a, pair<int, int> b){
	return b.first < a.first;
}

int main(){
	int n;

	cin >> n;

	while(n--){
		int t, g;
		cin >> t;

		pair<int, int> v[t];

		for (int i = 0; i < t; ++i){
			cin >> g;
			v[i] = make_pair(g, i);
		}

		sort(v, v+t, sortr);

		g = 0;

		for (int i = 0; i < t; ++i)
			if(i == v[i].second)
				g++;
		
		cout << g << endl;
	}
}