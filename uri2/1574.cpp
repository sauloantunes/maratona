#include <iostream>
#include <string>

using namespace std;

int main(){
	int m,n,p;
	string s;

	cin >> n;

	while(n--){
		cin >> m;
		int v[m], r=0;

		for (int i = 0; i < m; ++i){
			cin >> s;

			if(s == "LEFT")
				v[i] = -1;
			
			if(s == "RIGHT")
				v[i] = 1;

			if(s == "SAME"){
				cin >> s;
				cin >> p;
				v[i] = v[p-1];
			}

			r += v[i];
		}

		cout << r << endl;
	}
}