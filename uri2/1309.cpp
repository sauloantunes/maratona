#include <iostream>
#include <iomanip>

using namespace std;

int main(){    
	string d;
	int c;

	ios_base::sync_with_stdio(false);

	while(cin >> d >> c){
		cout << '$';

		int t = d.size() % 3;

		for (int i = 0; i < t; ++i)
			cout << d[i];

		d.erase(0, t);

		if(d.size() && t)
			cout << ',';	 

		while(d.size()){
			cout << d[0] << d[1] << d[2];
			d.erase(0,3);

			if(d.size())
				cout << ',';
		}

		cout << '.' << setw(2) << setfill('0') << c << endl;
	}
}
