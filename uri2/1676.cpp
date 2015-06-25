#include <bits/stdc++.h>

using namespace std;

int main(){
	vector< pair<int, int> > vln;
	vln.push_back(make_pair(2,0));

	int n = 3;

	while(vln.size() < 3001){
		int nln = 1;

		for (int i = 0; i < vln.size(); ++i){
			vln[i].second++;

			if(vln[i].first == vln[i].second){
				vln[i].second = 0;
				nln = 0;
				break;
			}
		}

		if(nln)
			vln.push_back(make_pair(n,0));

		n++;
	}

	while(cin >> n, n)
		cout << vln[n-1].first << endl;	
}