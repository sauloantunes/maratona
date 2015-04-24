#include <iostream>
#include <cstdio>
 
using namespace std;
 
int main(){
    int a=0, b, c;
    b = ~a;
     
    for(int i=0; i < 5; i++){
        cin >> c;
        a = (a << 1) + c;
    }
     
    for(int i=0; i < 5; i++){
        cin >> c;
        b = (b << 1) + c;
    }
     
    if(a == ~b)
        cout << "Y" << endl;
    else
        cout << "N" << endl;
}