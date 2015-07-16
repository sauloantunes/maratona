#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, k, kt=0;
	float m, mt=0;
	string s;

	cin >> n;

	for (int i = 0; i < n; ++i){
		cin >> m;
		mt += m;

		cin.get();
		getline(cin, s);

		k = 1;

		for (int i = 0; i < s.size(); ++i)
			if(s[i] == ' ')
				k++;

		kt += k;

		printf("day %d: %d kg\n", i+1, k);
	}

	printf("%.2f kg by day\n", (float)kt/n);
	printf("R$ %.2f by day\n", mt/n);
}