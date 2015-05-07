#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>

using namespace std;

int main(){
	string s;
	char c;

	while(cin >> c >> s, !(c == '0' && s.size() == 1 && s[0] == '0')){
		int i=0, p=0;

		while((s[i] == '0' || s[i] == c) && i < s.size())
			i++;

		while(i < s.size()){
			if(s[i] != c){
				printf("%c", s[i]);
				p++;
			}
			i++;
		}

		if(p == 0)
			printf("0");

		printf("\n");
	}
}