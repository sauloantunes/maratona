//08:12
//08:31

#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
	int n;
	int nt[] = {100,50,20,10,5,2,1};
	cin >> n;
	cout << n << endl;

	for (int i = 0; i < 7; ++i)	{
		cout << (int)n/nt[i] << " nota(s) de R$ " << nt[i] << ",00" << endl;
		n -= (int)n/nt[i] * nt[i];
	}

}