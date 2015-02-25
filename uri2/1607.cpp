#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main(){
	int n;
	string a,b;

	cin >> n;

	while(n--){
		cin >> a >> b;
		int q=0;

		for (int i = 0; i < a.size(); ++i){
			if(a[i] <= b[i])
				q += b[i] - a[i];
			else
				q += 'z' - a[i] + b[i] - 'a' + 1;
		}

		cout << q << endl;
	}
}