#include <bits/stdc++.h>

using namespace std;

int v[10001];

int bs(int n, int b, int e){
	int m = (b + e) / 2;

	if(e < b)
		return -1;

	if(v[m] == n){
		while(v[m] == v[m-1])
			m--;

		return m;
	}

	if(v[m] < n)
		return bs(n, m+1, e);

	return bs(n, b, m-1);
}

int main(){
	int n, q, qn, p, cont=1;

	while(cin >> n >> q, n+q){

		for (int i = 0; i < n; ++i)
			cin >> v[i];

		sort(v, v + n);

		cout << "CASE# " << cont++ << ":" << endl;
		
		for (int i = 0; i < q; ++i){
			cin >> qn;

			p = bs(qn, 0, n);

			if(p != -1)
				cout << qn << " found at " << p + 1 << endl;
			else
				cout << qn << " not found" << endl;
		}
	}
}