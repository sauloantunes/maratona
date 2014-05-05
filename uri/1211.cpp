#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int n,cont;
	vector<string> v;
	string x;

	while(cin >> n){
		v.clear();
		cont = 0;

		while(n--){
			cin >> x;
			v.push_back(x);
		}

		sort(v.begin(), v.end());

		for (int i = 0; i < v.size() - 1; ++i){
			for (int j = 0; j < v[0].size(); ++j){
				if(v[i][j] == v[i+1][j])
					cont++;
				else
					break;
			}
		}

		cout << cont << endl;

	}
}

