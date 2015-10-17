#include <bits/stdc++.h>

using namespace std;

int main(){
	long long m, n;

	while(cin >> m >> n, m+n){
		stringstream ss;

		ss << m+n;
		string s = ss.str();

		for (int i = 0; i < s.size(); ++i)
			if(s[i] != '0')
				cout << s[i];

		cout << endl;
	}
}