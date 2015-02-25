#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstring>

using namespace std;

int digitos(unsigned long long d){
    int i=0;

    if(d == 0)
        return 1;

    while(d){
        d = d/10;
        i++;
    }

    return i;
}

int main(){
    unsigned long long n;
    int t, p=4;

    cin >> n;

    while(n--){
        cin >> t;
        int c[t];
        unsigned long long m[t][t], a[t];

        memset(a, 0, sizeof a);

        for (int i = 0; i < t; ++i){
            for (int j = 0; j < t; ++j){
                cin >> m[i][j];
                m[i][j] *= m[i][j];
                a[j] = max(a[j], m[i][j]);
            }
        }

        for (int i = 0; i < t; ++i)
            c[i] = digitos(a[i]);

        printf("Quadrado da matriz #%d:\n", p++);

        for (int i = 0; i < t; ++i){
            for (int j = 0; j < t - 1; ++j)
                cout  << setw(c[j]) << m[i][j] << " ";
            
            cout << setw(c[t-1]) << m[i][t-1] << endl;
        }

        if(n)
            cout << endl;
    }
}