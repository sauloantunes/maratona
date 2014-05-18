#include <iostream>
#include <cmath>
using namespace std;
 
bool primo(long long int num){
 
    if(num == 2)
        return true;
 
    if(num%2 == 0)
        return false;
 
    for(unsigned i = 3; i <= sqrt(num); i += 2) 
        if(num%i == 0)
            return false;
     
    return true;
}
 
int main(){
    long long int n,num;
    cin >> n;
 
    while(n--){
        cin >> num;
        if(primo(num))
            cout << "Prime" << endl;
        else
            cout << "Not Prime" << endl;
    }
}