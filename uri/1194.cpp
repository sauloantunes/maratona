#include <iostream>
#include <string>

using namespace std;

void magica(string s1, string s2){

	string pa,pb,ea,eb;
	char raiz = s1[0];
	int pos = s2.find(raiz);

	// Se tiver elementos a esquerda
	if(pos != 0){
		pa =  s1.substr(1,pos);
		ea =  s2.substr(0,pos);
		magica(pa,ea);
	}

	// Se tiver elementos a direita
	if(pos + 1 < s1.size()){
		pb = s1.substr(pos+1);
		eb = s2.substr(pos+1);
		magica(pb,eb);
	}

	cout << raiz;
}

int main(){
	int c,n;
	string s1,s2;
	cin >> c;

	while(c--){
		cin >> n >> s1 >> s2;
		magica(s1,s2);
		cout << endl;
	}
}