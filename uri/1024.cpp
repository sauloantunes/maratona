//13:40
//14:13

#include <iostream>
#include <string>

using namespace std;

int main(){
	int n;
	string s;

	cin >> n;
	cin.get();



	while(n--){
		s.clear();
		getline(cin,s);

		char temp;
		int tam = s.size();

		for (int i = 0; i < tam; i++){
			if(s[i] > 64 && s[i] < 91 || s[i] > 96 && s[i] < 123 )
				s[i] += 3;
		}

		for (int i = 0; i < tam/2; i++){
				temp = s[i];
				s[i] = s[tam -i -1];
				s[tam -i -1] = temp;
		}

		for (int i = tam/2; i < tam; i++){
				s[i]--;
		}

		cout << s << endl;

	}
}