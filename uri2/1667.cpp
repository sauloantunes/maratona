#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	int cont = 0;

	while(cin >> s){
		if(s == "<br>"){
			cout << endl;
			cont = 0;
			continue;
		}

		if(s == "<hr>"){
			if(cont)
				cout << endl;
			cout << "--------------------------------------------------------------------------------" << endl;
			cont = 0;
			continue;
		}

		if(cont == 0){
			cont = s.size();
			cout << s;
			continue;
		}

		if(cont + s.size() + 1 <= 80){
			cout << " " << s;
			cont += s.size() + 1;
		}
		else {
			cout << endl << s;
			cont = s.size();
		}
	}

	cout << endl;
}