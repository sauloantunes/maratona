#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main(){
	int n,cont;
	map <string,int> arvores;
	map <string,int>::iterator arv;
	string s;
	cin >> n;
	cin.ignore(100,'\n');
	cin.ignore(100,'\n');	
	while(n--){
		cont = 0;
		arvores.clear();
		while(1){
			s.clear();
			getline(cin,s);
			if(!s.size())
				break;
			if(!arvores[s])
				arvores[s] = 1;
			else
				arvores[s] += 1;

			cont++;
			
		}

		for(arv = arvores.begin(); arv != arvores.end(); arv++){
			cout << fixed << setprecision(4);
			cout << arv->first << " " << 100.0 * arv->second / cont << endl;
		}
		if(n)
			cout << endl;

	}
}