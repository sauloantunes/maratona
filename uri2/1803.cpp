#include <bits/stdc++.h>

using namespace std;

int main(){
	string s[4];

	for (int i = 0; i < 4; ++i)
		cin >> s[i];
	
	int n = s[0].size();

	int f = (s[0][0] - '0') * 1000 +
			(s[1][0] - '0') * 100 +
			(s[2][0] - '0') * 10 +
			(s[3][0] - '0');

	int l = (s[0][n-1] - '0') * 1000 +
			(s[1][n-1] - '0') * 100 +
			(s[2][n-1] - '0') * 10 +
			(s[3][n-1] - '0');

	for (int i = 1; i < n-1; ++i){		
		int m = (s[0][i] - '0') * 1000 +
				(s[1][i] - '0') * 100 +
				(s[2][i] - '0') * 10 +
				(s[3][i] - '0');
		
		char c = (f * m + l) % 257;
		cout << c;
	}

	cout << endl;
}