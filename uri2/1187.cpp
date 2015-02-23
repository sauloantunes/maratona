#include <iostream>
#include <iomanip>
#include <cstdio>
 
using namespace std;
 
int main(){
    char c;
    double m[12][12];
 
    cin >> c;
 
    for (int i = 0; i < 12; ++i)
        for (int j = 0; j < 12; ++j)
            cin >> m[i][j];
     
    double s = 0;

    for (int i = 0; i < 5; ++i)
        for (int j = i + 1; j < 11 - i; ++j)
            s += m[i][j];
 
    cout << fixed << setprecision(1);
 
    if(c == 'S')
        cout << s << endl;
    else
        cout << s/30.0 << endl;
}