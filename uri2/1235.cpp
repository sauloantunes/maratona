#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	string s;

	cin >> n;
	cin.get();

	while(n--){
		getline(cin, s);
		int t = s.size();

		reverse(s.begin(), s.begin() + s.size()/2);
		reverse(s.begin() + s.size()/2, s.end());

		cout << s << endl;
	}
}