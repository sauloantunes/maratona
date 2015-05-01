#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstring>
 
using namespace std;
 
int main(){
    int k,n,x,t;
    int v[1001];
 
    while(cin >> n >> k, n+k){
        memset(v, 0, sizeof v);
 
        for (int i = 1; i <= n; ++i){
            cin >> x;
            v[x]++;
        }
 
        t = 0;
        for (int i = 1; i <= n; ++i)
            if(v[i] >= k )
                t++;
         
        cout << t << endl;
    }
}
