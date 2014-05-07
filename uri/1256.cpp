#include <iostream>
#include <vector>
 
using namespace std;
 
int main(){
    int n, m, c, v, p;
 
    cin >> n;
 
    while(n--){
        cin >> m >> c;
 
        vector< vector<int> > hash(m);
 
        while(c--){
            cin >> v;
            p = v % m;
            hash[p].push_back(v);
        }
 
        for (int i = 0; i < m; ++i)  {
            cout << i << " -> ";
 
            for (int j = 0; j < hash[i].size(); ++j)
                cout << hash[i][j] << " -> ";
             
            cout << "\\" << endl;
        }
 
        if(n)
            cout << endl;
 
    }
}