#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, l;

	cin >> n;

	while(n--){
		cin >> l;

		int sum=0;

		for (int i = 0; i < l; ++i){
			string s;
			cin >> s;

			for (int j = 0; j < s.size(); ++j)
				sum += s[j] - 'A' + i + j;			
		}

		cout << sum << endl;
	}
}