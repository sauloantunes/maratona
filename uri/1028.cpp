#include <iostream>
using namespace std;

int mdc(int a, int b){
	if(b == 0)  
  		return a;  

  	return mdc(b,a%b); 
}

int main(){
	int n,r,v;

	cin >> n;

	while(n--){
		cin >> r >> v;
		cout << mdc(v,r) << endl;
	}
}