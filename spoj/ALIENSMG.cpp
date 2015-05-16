#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
	int n;
	string s;

	while(cin >> n, n){
		vector<string> v;

		for (int i = 0; i < n; ++i){
			cin >> s;
			sort(s.begin(), s.end());
			v.push_back(s);
		}

		sort(v.begin(), v.end());

		int e = 1;
		for (int i = 1; i < n; ++i){
			if(v[i] == v[i-1])
				continue;
			e++;
		}

		cout << e << endl;
	}
}