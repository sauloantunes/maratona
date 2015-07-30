#include <bits/stdc++.h>

using namespace std;

struct no{
	char v;
	no *l;
	no *r;

	no(char c){
		v = c;
		l = NULL;
		r = NULL;
	}
};

no *root = NULL;
bool f = 0;

void insere(char c){
	if(!root){
		root = new no(c);
		return;
	}

	no *pai, *aux;
	pai = aux = root;

	while(aux){
		pai = aux;
		if(c < aux->v)
			aux = aux->l;
		else
			aux = aux->r;
	}

	if(c < pai->v)
		pai->l = new no(c);
	else
		pai->r = new no(c);
}

void prefixa(no *n){
	if(!n)
		return;

	if(f) cout << " "; f = 1;
	cout << n->v;

	prefixa(n->l);
	prefixa(n->r);
}

void posfixa(no *n){
	if(!n)
		return;

	posfixa(n->l);
	posfixa(n->r);

	if(f) cout << " "; f = 1;
	cout << n->v;
}

void infixa(no *n){
	if(!n)
		return;

	infixa(n->l);

	if(f) cout << " "; f = 1;
	cout << n->v;
	
	infixa(n->r);
}

void pesquisa(char s){
	no *r = root;

	while(r){
		if(r->v == s){
			cout << s << " existe" << endl;
			return;
		}
		else if(s < r->v)
			r = r->l;
		else
			r = r->r;
	}
	
	cout << s << " nao existe" << endl;
}

int main(){
	string r;
	char c;

	while(cin >> r){
		if(r == "I"){
			cin >> c;
			insere(c);
			continue;
		}

		else if(r == "P"){
			cin >> c;
			pesquisa(c);
			continue;
		}

		else if(r == "INFIXA")
			infixa(root);

		else if(r == "POSFIXA")
			posfixa(root);

		else
			prefixa(root);

		f = 0;
		cout << endl;
	}
}