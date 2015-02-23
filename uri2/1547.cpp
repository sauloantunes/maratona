#include <iostream>
#include <cstdlib>
#include <climits>

using namespace std;

int main(){
	int n, qt, s;

	cin >> n;

	while(n--){
		cin >> qt >> s;

		int aux, pos, ap=INT_MAX;

		for (int i = 0; i < qt; ++i){
			cin >> aux;
			if(abs(aux - s) < ap){
				ap = abs(aux - s);
				pos = i;
			}
		}

		cout << pos + 1 << endl;
	}
}