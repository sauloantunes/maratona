#include <iostream>
#include <cmath>
 
using namespace std;
 
int main(){
 
    int l,c,r1,r2, aux;
 
    while(cin >> l >> c >> r1 >> r2, l+c+r1+r2){
        pair<int,int> c1;
        c1.first  = r1;
        c1.second = r1;
        pair<int,int> c2;
        c2.first  = l - r2;
        c2.second = c - r2;
 
        if(r1*2 > l || r1*2 > c || r2*2 > l || r2*2 > c){
            cout << "N" << endl;
            continue;           
        }
 
        float d = pow(c2.first - c1.first,2) + pow(c2.second - c1.second,2);
        d = sqrt(d);
 
        if(d >= r1+r2)
            cout << "S" << endl;
        else
            cout << "N" << endl;
    }
}