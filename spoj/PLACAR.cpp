#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

bool prob(pair<string, int> a, pair<string, int> b){
	return a.second < b.second;
}

int main(){
	int n, p, inst = 1;
	string s;

	while(cin >> n){
		vector< pair<string, int> > v;
		for (int i = 0; i < n; ++i){
			cin >> s >> p;
			v.push_back(make_pair(s, p));
		}

		sort(v.begin(), v.end(), prob);

		for (int i = 0; i < v.size(); ++i){
			if(v[i].second != v[0].second){
				v.resize(i);
				break;
			}
		}

		sort(v.rbegin(), v.rend());

		cout << "Instancia " << inst++ << endl;
		cout << v.front().first << endl << endl;
	}
}