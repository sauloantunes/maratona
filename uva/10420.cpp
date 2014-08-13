//13:38
//13:55

#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
	map<string, int> list;
	map<string, int>::iterator it;
	string country;
	int n;

	cin >> n;

	while(n--){
		cin >> country;
		list[country]++;
		getline(cin, country);
	}

	for(it = list.begin(); it != list.end(); ++it)
		cout << it->first << " " << it->second << endl;

}