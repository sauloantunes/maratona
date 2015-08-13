#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;

	pair<int, int> consultas[n];
	for (int i = 0; i < n; ++i)
		cin >> consultas[i].second >> consultas[i].first;
	
	sort(consultas, consultas+n);

	int t = 0, h = 0;

	for (int i = 0; i < n; ++i){
		if(consultas[i].second >= h){
			t++;
			h = consultas[i].first;
		}
	}

	cout << t << endl;
}