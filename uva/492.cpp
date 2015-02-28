#include <iostream>
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

	while(getline(cin, s)){
		
		for (int i = 0; i < s.size(); ++i){
			if(isalpha(s[i]))
				continue;

			if(i == 0){
				cout << s[0];

				if(s.size() == 1)
					break;

				s = s.substr(1,-1);
				i = -1;
				continue;
			}

			piglatin(s.substr(0, i));
			s = s.substr(i, -1);
			i = -1;
		}

		cout << endl;
	}
}