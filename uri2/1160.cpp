#include <iostream>

using namespace std;

int main(){
	int t;

	cin >> t;

	while(t--){
		int pa,pb;
		double g1,g2;

		cin >> pa >> pb >> g1 >> g2;

		g1 /= 100.0;
		g2 /= 100.0;

		int i=0;

		while(pa <= pb && i <= 100){
			pa += pa*g1;
			pb += pb*g2;
			i++;
		}

		if(i > 100)
			cout << "Mais de 1 seculo." << endl;
		else
			cout << i << " anos." << endl;
	}
}