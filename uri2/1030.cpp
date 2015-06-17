#include <bits/stdc++.h>

using namespace std;

int main(){
	int nc, n, k;

	cin >> nc;

	for (int j = 1; j <= nc; ++j){		
		cin >> n >> k;
		k--;

		vector<int> v(n);
		for (int i = 0; i < n; ++i)
			v[i] = i+1;
		
		int pos = 0;
		while(v.size() > 1){
			pos = (pos + k) % v.size();
			v.erase(v.begin() + pos);			
			if(pos == v.size())
				pos = 0;
		}

		cout << "Case " << j << ": " << v[0] << endl;
	}
}