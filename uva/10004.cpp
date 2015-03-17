#include <iostream>
#include <cstring>
#include <queue>

using namespace std;

int v,e, g[200][200];
int color[200];

int main(){


    while(cin >> v, v){
        cin >> e;

        memset(g, 0, sizeof g);
        int o,d;
        for(int i=0; i<e; i++){
            cin >> o >> d;
            g[o][d] = g[d][o] = 1;
        }

        memset(color, -1, sizeof color);
        
        queue <int> p;
        int flag = 0;
        color[0] = 0;
        p.push(0);

        while(!p.empty()){
            int a = p.front();
            p.pop();

            for(int i=0; i<v; i++){
                if(g[a][i]){
                    if(color[i] == -1){
                        color[i] = (color[a]+1) % 2;
                        p.push(i);
                        continue;
                    }
                    if(color[i] == color[a]){
                        flag = 1;
                        break;   
                    }
                }
            }
            
            if(flag)
                break;
        }       
        
        if(flag)
            cout << "NOT BICOLORABLE." << endl;
        else
            cout << "BICOLORABLE." << endl;       
        
    }
}
