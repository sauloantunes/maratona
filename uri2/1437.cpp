#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

int main(){
	int n;

	while(cin >> n, n){
		int p=0;
		string s;
		cin >> s;

		for (int i = 0; i < s.size(); ++i){
			if(s[i] == 'D')
				p++;
			else
				p--;
		}

		char r[5];

		if(p > 0)
			strcpy(r,"NLSO");
		else
			strcpy(r,"NOSL");

		p = abs(p) % 4;

		cout << r[p] << endl;
	}
}