#include <iostream>
#include <vector>

using namespace std;

vector <int> v[25];
int pos[25];
int n;

void move(int a, int b){
	int pa = pos[a];
	int pb = pos[b];
	int aux;

	int pi=0;
	while(v[pa][pi] != a)
		pi++;

	for (int i = pi; i < v[pa].size(); ++i){
		aux = v[pa][i];
		v[pb].push_back(aux);
		pos[aux] = pb;
	}

	int s = v[pa].size();

	while(pi != s){
		v[pa].pop_back();
		pi++;
	}
}

void desempilha(int a){
	int pa = pos[a];
	int aux;
	
	while(v[pa].back() != a){
		aux = v[pa].back();
		v[pa].pop_back();
		v[aux].push_back(aux);
		pos[aux] = aux;
	}
}

void moveOnto(int a, int b){
	desempilha(a);
	desempilha(b);
	move(a,b);
}

void moveOver(int a, int b){
	desempilha(a);
	move(a,b);
}

void pileOnto(int a, int b){
	desempilha(b);
	move(a,b);
}

void pileOver(int a, int b){
	move(a,b);
}

void print(){
	for (int i = 0; i < n; ++i){
		cout << i << ":";
		for (int j = 0; j < v[i].size(); ++j)
			cout << " " << v[i][j];
		cout << endl;
	}
}

int main(){
	cin >> n;
	int a, b;
	string s, r;

	for (int i = 0; i < n; ++i){
		v[i].push_back(i);
		pos[i] = i;
	}

	while(cin >> s, s != "quit"){
		cin >> a >> r >> b;

		if(pos[a] == pos[b])
			continue;

		if(s+r == "moveover")
			moveOver(a,b);
		if(s+r == "moveonto")
			moveOnto(a,b);
		if(s+r == "pileover")
			pileOver(a,b);
		if(s+r == "pileonto")
			pileOnto(a,b);
	}

	print();
}