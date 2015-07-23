#include <bits/stdc++.h>

using namespace std;

int main(){
	int p;
	string s;

	while(cin >> s){
		cin >> p;
		int clk=0, r=0;
		
		for (int i = 0; i < s.size(); ++i){
			if(s[i] == 'W'){
				if(r)
					clk += 2;
				else
					clk++;
				r = 0;
			}
			else if(++r == p){
				clk++;
				r = 0;
			}
		}

		if(r)
			clk++;

		cout << clk << endl;
	}
}
