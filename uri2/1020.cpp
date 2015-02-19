#include <iostream>

using namespace std;

int main(){
	int s;

	cin >> s;

	cout << s/365 << " ano(s)" << endl;
	s -= s/365 * 365;

	cout << s/30 << " mes(es)" << endl;
	s -= s/30 * 30;

	cout << s << " dia(s)" << endl;
}