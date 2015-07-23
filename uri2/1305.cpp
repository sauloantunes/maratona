#include <bits/stdc++.h>

using namespace std;

int main(){
	string num, co;

	while(cin >> num){
		cin >> co;

		string b = "0000000000.0000000000";
		string c = "0000000000.0000000000";

		int pb = b.find('.');
		int pn = num.find('.');

		if(pn == -1)
			pn = num.size();

		for (int i = 0; i + pn < num.size(); ++i)
			b[pb + i] = num[pn + i];
		
		for (int i = 1; i <= pn; ++i)
			b[pb - i] = num[pn - i];			
		
		for (int i = 2; i < 6; ++i)
			c[pb -1 + i] = co[i];
		
		int m, n, up=1;

		sscanf(b.c_str(), "%d.%d", &m, &n);

		for (int i = pb; i < b.size(); ++i){
			if(c[i] == b[i])
				continue;

			if(c[i] > b[i])				
				up = 0;

			break;
		}

		if(up)
			cout << m+1 << endl;
		else
			cout << m << endl;
	}
}
