#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>

using namespace std;

int main(){
	string s;

	while(getline(cin, s)){
		int end=0;
		string aux;

		end = s.find(' ', 0);

		while(end != -1){
			aux = s.substr(0, end);
			reverse(aux.begin(), aux.end());
			cout << aux << " ";
			s = s.substr(end + 1, s.size() - end - 1);
			end = s.find(' ', 0);
		}

		reverse(s.begin(), s.end());
		cout << s << endl;
	}
}