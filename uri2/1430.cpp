#include <bits/stdc++.h>
 
using namespace std;

int p[26];
 
int main(){
    string s;
 
    p['W'] = 64;
    p['H'] = 32;
    p['Q'] = 16;
    p['E'] = 8;
    p['S'] = 4;
    p['T'] = 2;
    p['X'] = 1;
 
    while(getline(cin, s), s[0] != '*'){
        int r = 0;
 
        for (int i = 1; i < s.size(); ++i){
            int t = 0;
            while(s[i] != '/')
                t += p[s[i++]];
 
            if(t == 64)
                r++;
        }
 
        cout << r << endl;
    }
}