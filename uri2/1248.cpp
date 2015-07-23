#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;

	cin >> n;
	cin.get();

	while(n--){
		string d, b, l;

		getline(cin, d);
		getline(cin, b);
		getline(cin, l);

		int v[26] = {0};

		for (int i = 0; i < d.size(); ++i)
			v[d[i] - 'A'] = 1;
		
		for (int i = 0; i < b.size(); ++i)
			v[b[i] - 'A']--;
		
		for (int i = 0; i < l.size(); ++i)
			v[l[i] - 'A']--;
		
		int cheater = 0;
		for (int i = 0; i < 26; ++i){
			if(v[i] < 0){
				cheater = 1;
				break;
			}
		}

		if(cheater){
			cout << "CHEATER" << endl;
			continue;
		}

		for (int i = 0; i < 26; ++i)
			if(v[i])
				printf("%c", 'A'+i);
		cout << endl;
	}
}