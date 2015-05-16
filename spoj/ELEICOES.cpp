#include <algorithm>
#include <iostream>
#include <string>
#include <map>

using namespace std;

bool comp(pair<string, int> a, pair<string, int> b){
	return a.second < b.second;
}

int main(){
	ios_base::sync_with_stdio(false);

	int n;
	string s;
	map<string, int> cand;

	cin >> n;
	while(n--){
		cin >> s;

		if(cand.find(s) != cand.end())
			cand[s]++;
		else
			cand[s] = 1;
	}

	pair<string, int> r = *max_element(cand.begin(), cand.end(), comp);
	cout << r.first << endl;
}