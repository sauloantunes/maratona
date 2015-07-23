#include <bits/stdc++.h>

using namespace std;

bool mysort(string a, string b){
	return a.size() < b.size();
}

int main(){
	int n;

	cin >> n;
	cin.get();

	while(n--){
		vector<string> v;
		string s;

		getline(cin, s);
		stringstream ss(s);

		while(ss >> s)
			v.push_back(s);

		stable_sort(v.rbegin(), v.rend(), mysort);

		for (int i = 0; i < v.size(); ++i){
			if(i)
				cout << " ";
			cout << v[i];
		}
		cout << endl;
	}
}