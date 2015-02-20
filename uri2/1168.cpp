#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main(){
	int leds[10] = {6,2,5,5,4,5,6,3,7,6};
	int n;
	string s;

	cin >> n;

	while(n--){
		cin >> s;
		int l = 0;
		for (int i = 0; i < s.size(); ++i)
			l += leds[s[i]-48];
		
		cout << l << " leds" << endl;
	}
}