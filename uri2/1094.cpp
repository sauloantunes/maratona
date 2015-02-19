#include <iostream>
#include <iomanip>
#include <map>

using namespace std;

int main(){
	int n, m, s;
	char t;
	map <char, int> a;

	a['C'] = 0;
	a['R'] = 0;
	a['S'] = 0;

	cin >> n;

	while(n--){
		cin >> m >> t;
		a[t] += m;
	}

	s = a['C'] + a['R'] + a['S'];

	cout << "Total: " << s << " cobaias" << endl;
	
	cout << "Total de coelhos: " << a['C'] << endl;
	cout << "Total de ratos: "   << a['R'] << endl;
	cout << "Total de sapos: "   << a['S'] << endl;

	cout << fixed << setprecision(2);

	cout << "Percentual de coelhos: " << a['C'] * 100.0 / s << " %" << endl;
	cout << "Percentual de ratos: "   << a['R'] * 100.0 / s << " %" << endl;
	cout << "Percentual de sapos: "   << a['S'] * 100.0 / s << " %" << endl;

}