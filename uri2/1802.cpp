#include <bits/stdc++.h>

using namespace std;

int main(){
	int p, m, q, f, b, k;

	cin >> p;
	int vp[p];
	for (int i = 0; i < p; ++i)
		cin >> vp[i];
	
	cin >> m;
	int vm[m];
	for (int i = 0; i < m; ++i)
		cin >> vm[i];

	cin >> q;
	int vq[q];
	for (int i = 0; i < q; ++i)
		cin >> vq[i];

	cin >> f;
	int vf[f];
	for (int i = 0; i < f; ++i)
		cin >> vf[i];

	cin >> b;
	int vb[b];
	for (int i = 0; i < b; ++i)
		cin >> vb[i];
	
	cin >> k;
	vector<int> v;

	for (int i = 0; i < p; ++i)
		for (int j = 0; j < m; ++j)
			for (int k = 0; k < q; ++k)
				for (int l = 0; l < f; ++l)
					for (int n = 0; n < b; ++n)
						v.push_back(vp[i] + vm[j] + vq[k] + vf[l] + vb[n]);

	sort(v.rbegin(), v.rend());

	int sum = 0;

	for (int i = 0; i < k; ++i)
		sum += v[i];
	
	cout << sum << endl;
}