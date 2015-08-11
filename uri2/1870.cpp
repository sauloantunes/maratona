#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int l, c, p;
 
    while(cin >> l >> c >> p, l+c+p){
        int m[l][c], boom = 0;
        p--;
 
        for (int i = 0; i < l; ++i)
            for (int j = 0; j < c; ++j)
                cin >> m[i][j];
 
        for (int i = 0; i < l; ++i){
            int L = 0, R = c-1;
 
            for (int j = p; j < c; ++j)
                if(m[i][j]){
                    R = j;
                    break;
                }
 
            for (int j = p; j >= 0; j--)
                if(m[i][j]){
                    L = j;
                    break;
                }
 
            p += m[i][L] - m[i][R];
  
            if(p >= R || p <= L){
                cout << "BOOM " << i + 1 << " " << p + 1 << endl;
                boom = 1;
                break;
            }
        }
 
        if(!boom)
            cout << "OUT " << p + 1  << endl; 
    }
}