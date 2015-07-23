#include <bits/stdc++.h>

using namespace std;

bool isWord(string s){
	int w = 1;

	if(s.size() == 1)
		if(s[0] >= '0' && s[0] <= '9' || s[0] == '.')
			return false;

	for (int i = 0; i < s.size(); ++i)
		if(s[i] >= '0' && s[i] <= '9' || s[i] == '.' && i != s.size()-1)
			return false;

	return true;

}

int sizeOfWord(string s){
	if(s[s.size() - 1] == '.')
		return s.size() - 1;
	else
		return s.size();
}

int main(){
	string s;

	while(getline(cin, s)){
		int words = 0;
		int size  = 0;

		stringstream ss(s);

		while(ss >> s){
			if(isWord(s)){
				words++;
				size += sizeOfWord(s);
			}
		}

		if(words == 0){
			size = 1;
			words = 1;
		}

		int m = size / words;

		if(m <= 3)
			cout << 250 << endl;
		else if(m <= 5)
			cout << 500 << endl;
		else
			cout << 1000 << endl;
	}
}