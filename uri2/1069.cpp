#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;

	cin >> n;

	while(n--){
		string s;
		cin >> s;
		int cont = 0;
		int diam = 0;

		for (int i = 0; i < s.size(); ++i){
			if(s[i] == '<')
				cont++;
			if(s[i] == '>' && cont){
				diam++;
				cont--;
			}
		}

		cout << diam << endl;
	}
}