#include <iostream>
#include <cstring>
using namespace std;

int g[80000];

int main(){
	int t,n,a,b,q,v,p;

	cin >> t;
	while(t--){
		memset(g,0,sizeof g);

		cin >> n;
		for(int i = 1; i < n; i++){
			cin >> a >> b;
			g[b] = a;
		}
		
		cin >> q;
		while(q--){
			cin >> v >> p;
			int r = v;

			while(1){
				if(g[v] < p)
					break;
				r = v = g[v];
			}
						
			cout << r << endl;
		}

		cout << endl;
	}	
}