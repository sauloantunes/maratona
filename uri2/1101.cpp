#include <iostream>

using namespace std;

int main(){
	int m,n;

	while(cin >> m >> n, n > 0 && m > 0){
		int me = min(m,n);
		int ma = max(m,n);
		int m = 0;

		for (int i = me; i <= ma; ++i){
			cout << i << " ";
			m += i;
		}
		
		cout << "Sum=" << m << endl;

	}
}	