#include <iostream>
#include <sstream>
#include <string>
#include <map>

using namespace std;

int main(){
	int c, m, n;

	cin >> c;

	while(c--){
		cin >> m >> n;
		map<string, string> dict;
		string p, s;
		cin.ignore(1);	

		for (int i = 0; i < m; ++i){			
			getline(cin, p);
			getline(cin, s);
			dict[p] = s;
		}

		for (int i = 0; i < n; ++i){
			getline(cin, s);
			istringstream iss(s);			

			while(iss >> s){							
				if(dict.find(s) != dict.end())
					cout << dict[s] << " ";
				else
					cout << s  << " ";
			}

			cout << endl;
		}
		
		cout << endl;
	}
}