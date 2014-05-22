#include <iostream>
#include <algorithm>
using namespace std;

int f[1000000];
int v[25];

int main(){
	int t,n,m;
	int maior;
	cin >> t;
	while(t--){
		cin >> n >> m;
		
		for (int i = 0; i < n; ++i)
			cin >> v[i];
		
		sort(v, v+n);

		for(int i = 0; i <= m; i++)
			f[i] = i;

		for(int i = 1; i < n; i++){
			int l = m;

			if(i < n-1)
				l = min(m, v[i]*v[i+1]);

			for(int j = v[i]; j <= l; j++)
				f[j] = min(f[j], 1 + f[ j-v[i] ]);
		}

		cout << f[m] << endl;
	}
}