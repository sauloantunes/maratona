#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, cont=1;
	while(cin >> n){
		int m=0, f=0, t;
		char c;
		string s;

		cin.get();
		getline(cin, s);
		stringstream ss(s);
		
		while(ss >> t >> c){
			if(t == n)
				if(c == 'F')
					f++;
				else
					m++;
		}

		if(cont > 1)
			cout << endl;

		printf("Caso %d:\n", cont++);
		printf("Pares Iguais: %d\n", m+f);
		printf("F: %d\n", f);
		printf("M: %d\n", m);
	}
}