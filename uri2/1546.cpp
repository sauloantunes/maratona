#include <iostream>
#include <string>

using namespace std;

int main(){
	int n,q,p;
	string t[] = {"Rolien", "Naej", "Elehcim", "Odranoel"};

	cin >> n;

	while(n--){
		cin >> q;
		while(q--){
			cin >> p;
			cout << t[p-1] << endl;
		}
	}
}