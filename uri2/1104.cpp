#include <bits/stdc++.h>

using namespace std;

int main(){
	int a, b, t;

	while(cin >> a >> b, a+b){
		map<int, int> da, db;

		for (int i = 0; i < a; ++i){
			cin >> t;
			if(da.count(t))
				da[t]++;
			else
				da[t] = 1;
		}
		
		for (int i = 0; i < b; ++i){
			cin >> t;
			if(db.count(t))
				db[t]++;
			else
				db[t] = 1;
		}

		int ca=0, cb=0;
		map<int, int>::iterator it = da.begin();

		for (it; it != da.end() ; ++it)
			if(!db.count(it->first))
				ca++;

		for (it = db.begin(); it != db.end() ; ++it)
			if(!da.count(it->first))
				cb++;

		cout << min(ca, cb) << endl;
	}
}