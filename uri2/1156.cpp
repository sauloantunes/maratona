#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	float s=0;

	int i=1, j=1;

	while(i <= 39){
		s += (float)i/j;
		i += 2;
		j *= 2;
	}

	cout << fixed << setprecision(2) << s << endl;
}