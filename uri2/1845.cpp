#include <bits/stdc++.h>
   
using namespace std;
   
int main(){
    string s;
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
    while(getline(cin, s)){
        int f = 0;
        int p = 0;
   
        for (int i = 0; i < s.size(); ++i){
            if(s[i] == 's' || s[i] == 'b' || s[i] == 'p' || s[i] == 'z' || s[i] == 'v' || s[i] == 'x' || s[i] == 'j' || s[i] == 'f'){
                if(!f){
                    s[p++] = 'f';
                    f = 1;
                }
                continue;
            }
   
            if(s[i] == 'S' || s[i] == 'B' || s[i] == 'P' || s[i] == 'Z' || s[i] == 'V' || s[i] == 'X' || s[i] == 'J' || s[i] == 'F'){
                if(!f){
                    s[p++] = 'F';
                    f = 1;
                }
                continue;
            }
              
            s[p++] = s[i];
            f = 0;
        }
      
        s.resize(p);
  
        cout << s << "\n";
    }
}