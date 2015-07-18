#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;

	cin >> n;

	while(n--){
		string s;
		int t;

		cin >> s;
		cin >> t;

		for (int i = 0; i < s.size(); ++i){
			s[i] -= t;

			if(s[i] < 'A')
				s[i] = 'Z' - ('A' - s[i] - 1);
		}

		cout << s << endl;
	}
}