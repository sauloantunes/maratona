#include <iostream>
#include <iomanip>
#include <cstdio>
 
using namespace std;
 
int main(){
    int a,b,p,s,d,n;
    int v[101];
 
    cin >> n;
 
    while(n--){
        cin >> p >> s >> d;
         
        // table
        for (int i = 0; i < 101; ++i)
            v[i] = i;
 
        // pos
        int pos[p];
        for (int i = 0; i < p; ++i)
            pos[i] = 1;
 
        // snakes and ladders
        for (int i = 0; i < s; ++i){
            cin >> a >> b;
            v[a] = b;       
        }
 
        // game
        int win = 0;
        for (int i = 0; i < d; ++i){
            cin >> a;
 
            if(win)
                continue;
 
            b = pos[i % p];
            pos[i % p] = min(v[min(b + a, 100)], 100);
 
            if(pos[i % p] == 100)
                win  = 1;
        }
 
        for (int i = 0; i < p; ++i)
            printf("Position of player %d is %d.\n", i+1, pos[i]);
    }
}
