#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;

	while(cin >> s){
		int sum=0, cont=0;

		for (int i = 0; i < s.size(); ++i){
			if(s[i] == '1' && i < s.size() -1)
				if(s[i+1] == '0'){
					sum += 10;
					i++;
				}

			sum += s[i] - '0';
			cont++;
		}

		cout << fixed << setprecision(2) << (float)sum/cont << endl;
	}
}