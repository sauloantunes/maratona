#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
	string s;

	while(cin >> s){
		reverse(begin(s),end(s));

		int p1, p2, p3;

		p1 = s.find('=');
		p2 = s.find('+');
		p3 = s.size();

		int c = stoi(s.substr(0,    p1));
		int b = stoi(s.substr(p1+1, p2 - p1));
		int a = stoi(s.substr(p2+1, p3 - p2));

		if(a + b == c)
			puts("True");
		else
			puts("False");

		if(s == "0+0=0")
			break;
	}
}