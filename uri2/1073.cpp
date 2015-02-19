#include <iostream>
 
using namespace std;
 
int main(){
    int n;
 
    cin >> n;
 
    int i=2;
 
    while(i <= n){
        cout << i << "^2 = " << i*i << endl;
        i += 2;
    }
}