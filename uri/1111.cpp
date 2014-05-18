#include <iostream>
#include <climits>
#include <cstring>
#include <deque>
#define INF INT_MAX
using namespace std;
 
int m[100][100];
int d[100];
int n, v, x0, x1, y0, y1,p, ini, dest;
 
void djk(){
    for(unsigned i = 0; i < n*n; ++i)
        d[i] = INF;
 
    d[ini] = 0;
    deque<int> fila;
 
    fila.push_front(ini);
 
    while(!fila.empty()){
        ini = fila[0];
        fila.pop_front();
        for(unsigned i = 0; i < n*n; ++i) {
            if(m[ini][i]){
                if(d[i] >= d[ini] + 1){
                    d[i] = d[ini] + 1;
                    fila.push_back(i);
                }
            }
        }
    }
}
 
int main(){
 
    while(cin >> n, n){
 
        memset(m,0,sizeof(m));
 
        for(int i = n - 1; i >= 0; i--) {
            for(unsigned j = 0; j < n; ++j) {
                 
                cin >> v;
                if(v) m[i*n + j][i*n + j +n] = v;
 
                cin >> v;
                if(v) m[i*n + j][i*n + j -n] = v;
 
                cin >> v;
                if(v) m[i*n + j][i*n + j -1] = v;
 
                cin >> v;
                if(v) m[i*n + j][i*n + j +1] = v;                           
            }
        }
 
        cin >> p;
        while(p--){
            cin >> x0 >> y0;
            cin >> x1 >> y1;
 
            ini  = y0 * n + x0;
            dest = y1 * n + x1;
 
            djk();
            if(d[dest] == INF)
                cout << "Impossible" << endl;
            else
                cout << d[dest] << endl;
        }
        cout << endl;
         
    }
}