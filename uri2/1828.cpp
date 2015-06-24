#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, count = 1;
	map<string, int> rules;

	rules["tesourapapel"] 	= 1;
	rules["tesouralagarto"] = 1;
	rules["papelpedra"] 	= 1;
	rules["papelSpock"] 	= 1;
	rules["pedralagarto"] 	= 1;
	rules["pedratesoura"] 	= 1;
	rules["Spocktesoura"] 	= 1;
	rules["Spockpedra"] 	= 1;
	rules["lagartoSpock"] 	= 1;
	rules["lagartopapel"] 	= 1;

	cin >> n;

	while(n--){
		string r, s;

		cin >> s >> r;

		if(rules.count(s+r))
			cout << "Caso #" << count++ << ": Bazinga!" << endl;
		else if(rules.count(r+s))
			cout << "Caso #" << count++ << ": Raj trapaceou!" << endl;
		else
			cout << "Caso #" << count++ << ": De novo!" << endl;
	}
}