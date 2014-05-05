#include <iostream>
#include <iomanip>
#include <string>
#include <map>

using namespace std;

int main(){
	int n,p,m,qtd;
	float total, preco;
	string fruta;

	cin >> n;

	while(n--){
		map<string, float> valores;
		cin >> m;
		while(m--){
			cin >> fruta >> preco;
			valores[fruta] = preco;
		}
		cin >> p;
		total = 0;
		while(p--){
			cin >> fruta >> qtd;
			total += valores[fruta] * qtd;
		}

		cout << "R$ " << fixed << setprecision(2) << total << endl;
	}
}