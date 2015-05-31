#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	int n, l;

	while(cin >> n >> l, n+l){
		vector<int> v(l);

		for (int i = 0; i < l; ++i)
			cin >> v[i];
		
		int mov = n;
		vector<int>::iterator pos;

		for (int i = 0; i < l; ++i){
			pos  = upper_bound(v.begin() + i, v.end(), v[i] + n - 2);

			if(pos == v.end())
				mov = min(mov, n - (l - i));
			else{
				int j = pos - v.begin();
				if(v[j] == v[i] + n -1)
					mov = min(mov, n - (j - i + 1));
				else
					mov = min(mov, n - (j - i));
			}
		}
		cout << mov << endl;
	}
}