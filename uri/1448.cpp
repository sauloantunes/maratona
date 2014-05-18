#include <iostream>
#include <string>
 
using namespace std;
 
int main(){
    int n;
    cin >> n;
    cin.get();
    for(int k=1; k<=n; k++){
        string s,s1,s2;
        int t1=0, t2=0;
        getline(cin,s);
        getline(cin,s1);
        getline(cin,s2);
 
        for(unsigned i = 0; i < s.size(); ++i) {
            if(s[i] == s1[i])
                t1++;
             
            if(s[i] == s2[i])
                t2++;
        }
 
        if(t1 == t2){
            for(unsigned i = 0; i < s.size(); ++i) {
                if(s[i] == s1[i] && s[i] != s2[i]){
                    t1++;
                    break;
                }
                if(s[i] != s1[i] && s[i] == s2[i]){
                    t2++;
                    break;
                }
            }
        }
 
        cout << "Instancia " << k << endl;
 
        if(t1 > t2)
            cout << "time 1" << endl << endl;
 
        if(t1 < t2)
            cout << "time 2" << endl << endl;
 
        if(t1 == t2)
            cout << "empate" << endl << endl;
 
    }
}