#include <iostream>
#include <map>

using namespace std;

int main(){
	int t,n,x;

	cin >> t;

	while(t--){
		cin >> n;
		int s=0;
		map <int, int> sheep;

		while(n--){
			cin >> x;
			if(sheep.count(x))
				continue;
			else{
				sheep[x] = 1;
				s++;
			}
		}

		cout << s << endl;
	}
}