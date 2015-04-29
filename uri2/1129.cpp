#include <iostream>

using namespace std;

char ans[] = "ABCDE*";

int main(){
	int n, r[5];
	char a;

	while(cin >> n, n){
		while(n--){
			for (int i = 0; i < 5; ++i){				
				cin >> r[i];
				r[i] = r[i]/128;
			}
			
			a = '*';

			for (int i = 0; i < 5; ++i){
				if(!r[i]){					
					if(a == '*')
						a = ans[i];
					else{
						a = '*';
						break;
					}
				}
			}	

			cout << a << endl;
		}
	}
}