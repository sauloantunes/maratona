#include <iostream>

using namespace std;

int main(){

	float a;
	int n = 0;
	
	for (int i = 0; i < 6; ++i)	{
		cin >> a;

		if(a > 0)
			n++;
	}

	cout << n << " valores positivos" << endl;


}