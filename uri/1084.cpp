#include <iostream>
#include <cstdio>
using namespace std;
 
int main(){
    int n,d;
 
    while(cin >> n >> d, n && d){
 
        char in[n+1];
        char out[n+1];
         
        cin.get();
        scanf("%s",in);
 
        int topo = -1;
        int pos = 0;
 
        while(d > 0){
            if(topo == -1)
                out[++topo] = in[pos++];        
 
            if(out[topo] < in[pos]){
                topo--;
                d--;
                continue;
            }
 
            out[++topo] = in[pos++];
 
            if(pos == n)
                while(d--)
                    topo--;
        }
 
        for(unsigned i = pos; i < n; ++i) 
            out[++topo] = in[i];
        out[topo+1] = '\0';
        printf("%s\n",out);
    }
}