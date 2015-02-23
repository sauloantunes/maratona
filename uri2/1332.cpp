#include <iostream>

using namespace std;

int main(){
	int n;
	string s;

	cin >> n;

	while(n--){
		cin >> s;

		if(s.size() == 5){
			cout << 3 << endl;
			continue;
		}

		string one="one", two="two";
		int o=0, t=0;

		for (int i = 0; i < 3; ++i){
			if(s[i] == one[i])
				o++;
			if(s[i] == two[i])
				t++;
		}

		if(o > t)
			cout << 1 << endl;
		else
			cout << 2 << endl;
	}
}