#include <iostream>
#include <cstdio>
 
using namespace std;
 
int x;
int y;
 
int fib(int f){
    y++;
    if(f == 0)
        return 0;
    if(f == 1)
        return 1;
 
    return fib(f-1) + fib(f-2);
}
 
int main(){
    int n,f;
 
    cin >> n;
 
    while(n--){
        cin >> f;
 
        y = -1;
        x = fib(f);
 
        printf("fib(%d) = %d calls = %d\n",f,y,x);
    }
}