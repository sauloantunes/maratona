#include <iostream>
#include <cstdio>
#include <string>

using namespace std;
	
void piglatin(string s){
	if(s[0] == 'a' || s[0] == 'A' ||
	   s[0] == 'e' || s[0] == 'E' ||
	   s[0] == 'i' || s[0] == 'I' || 
	   s[0] == 'o' || s[0] == 'O' || 
	   s[0] == 'u' || s[0] == 'U' )
		cout << s << "ay";
	else
		cout << s.substr(1, -1) << s[0] << "ay";
}

int main(){
	string s;
	ios_base::sync_with_stdio(false);

	while(getline(cin, s)){
		int pos=0;
		
		for (int i = 0; i < s.size(); ++i){
			if(isalpha(s[i]))
				continue;

			if(i == pos){
				cout << s[i];
				pos++;
				continue;
			}

			piglatin(s.substr(pos, i - pos));
			cout << s[i];
			pos = i + 1;
		}

		if(pos != s.size())
			piglatin(s.substr(pos, s.size() - pos));

		cout << endl;
	}
}