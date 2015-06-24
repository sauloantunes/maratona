#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	string s, r;

	cin >> n;

	while(n--){
		cin >> s >> r;

		if(s.size() < r.size()){
			cout << "nao encaixa" << endl;
			continue;
		}

		int encaixa = 1;
		int is = s.size() - r.size();

		for (int i = 0; i < r.size(); ++i){
			if(s[is + i] == r[i])
				continue;
			encaixa = 0;
			break;
		}

		if(encaixa)
			cout << "encaixa" << endl;
		else
			cout << "nao encaixa" << endl;
	}
}