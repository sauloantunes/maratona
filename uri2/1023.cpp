#include <bits/stdc++.h>

using namespace std;

bool mysort(pair<int, int> a, pair<int, int> b){
	return a.second/a.first < b.second/b.first;
}

int main(){
	int n, cont=1;

	while(cin >> n, n){
		map<int, int> m;
		int t1=0, t2=0;
		int x, y, t;

		for (int i = 0; i < n; ++i){
			cin >> x >> y;
			t = y/x;

			if(m.count(t))
				m[t] += x;
			else
				m[t] = x;

			t1 += x;
			t2 += y;
		}

		if(cont > 1)
			printf("\n");

		cout << "Cidade# " << cont++ << ":" << endl;

		map<int, int>::iterator it = m.begin();

		while(it != m.end()){
			if(it != m.begin())
				cout << " ";

			cout << it->second << "-" << it->first;
			it++;

		}	
		
		printf("\nConsumo medio: %.2f m3.\n", (float)t2/t1 -0.0049);
	}
}