#include <iostream>

using namespace std;
/*
Slump
	Começa com D ou E.
	Seguido de F's
	Termina com G ou uma nova Slumpy
*/

int slump(string s, int p){
	if(s[p] != 'D' && s[p] != 'E')
		return 0;

	p++;
	if(s[p] != 'F')
		return 0;

	while(s[p] == 'F')
		p++;

	if(s[p] == 'G')
		return p+1;

	if(s[p] == 'D' || s[p] == 'E')
		return slump(s, p);

	return 0;
}

/*
Slimp
	Começa com A
	Proximo 
		H, termina Slimp
		B + Slimp + C
		Slump + C
*/

int slimp(string s, int p){
	if(s[p] != 'A')
		return 0;

	p++;
	if(s[p] == 'H')
		return p+1;

	if(s[p] == 'B'){
		p = slimp(s, p+1);
		if(!p)
			return 0;
		if(s[p] == 'C')
			return p + 1;
	}

	p = slump(s, p);
	if(!p)
		return 0;
	if(s[p] == 'C')
		return p+1;
}

int slurpy(string s){
	int p;
	p = slimp(s,0);

	if(!p)
		return 0;

	p = slump(s, p);
	return p == s.size();

}

int main(){
	int n;
	string s;

	cin >> n;

	cout << "SLURPYS OUTPUT" << endl;
	while(n--){
		cin >> s;
		if(slurpy(s))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	cout << "END OF OUTPUT" << endl;
}


/*
Slump
	Começa com D ou E.
	Seguido de F's
	Termina com G ou uma nova Slumpy

Slimp
	Começa com A
	Proximo 
		H, termina Slimp
		B + Slimp + C
		Slump + C

Slurpy
	Slimp + Slump
*/