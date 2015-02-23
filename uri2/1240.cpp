#include <iostream>
#include <string>

using namespace std;

int main(){
	string a,b;
	int n;

	cin >> n;

	while(n--){
		cin >> a >> b;
		if(b.size() > a.size()){
			cout << "nao encaixa" << endl;
			continue;
		}
		if(a.substr(a.size() - b.size(), b.size()) == b)
			cout << "encaixa" << endl;
		else
			cout << "nao encaixa" << endl;
	}
}