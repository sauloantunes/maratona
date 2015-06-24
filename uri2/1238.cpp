#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	string r, s;

	cin >> n;

	while(n--){
		cin >> s;
		cin >> r;

		int t = min(s.size(), r.size());

		for (int i = 0; i < t; ++i){
			cout << s[i];
			cout << r[i];
		}

		if(s.size() < r.size())
			s = r;

		for (int i = t; i < s.size(); ++i)
			cout << s[i];
		
		cout << endl;

	}
}