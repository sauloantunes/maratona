#include <iostream>
#include <algorithm>

using namespace std;


int main(){
	int n;
	string s, p;
	
	cin >> n;

	while(n--){
		cin >> p >> s;
		int t = 2;
		int r = 0;

		while(t--){
			for (int i = 0; i < s.size(); ++i){
				if(s[i] == p[0]){
					r = 1;
					for (int j = 0; j < p.size(); ++j){
						if(p[j] == s[(i+j) % s.size()])
							continue;						
						r = 0;
						break;
					}	
				}
				if(r)
					break;
			}

			if(r)
				break;

			reverse(s.begin(), s.end());
		}

		if(r)
			cout << "S" << endl;
		else
			cout << "N" << endl;
	}
}