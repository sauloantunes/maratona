#include <iostream>

using namespace std;

int main(){
	int n;
	string s;

	cin >> n;

	while(n--){
		cin >> s;
		int diamantes = 0;
		int a,aa,b,bb;
		int pos = 0;

		while(1){
			a = s.find('<',pos);
			pos = a+1;
			if(a == -1)
				break;
			aa = s.find('<',a+1);
			if(aa == -1)
				aa = s.size();
			
			b = s.find('>',a);
			
			if(b == -1)
				break;

			if(b < aa){
				diamantes++;
				s[a] = '.';
				s[b] = '.';
				pos = 0;
			}
		}

		cout << diamantes << endl;

	}
}