#include <iostream>
#include <vector>
using namespace std;
 
int m[51][101];
 
int n,k;
vector< pair<int,int> > v;
 
int mochila(){
    for(int i = 0; i <= k; ++i)
        m[0][i] = 0;
    for(int i = 0; i <= n; ++i)
        m[i][0] = 0;
 
    for(int i = 1; i <= n; ++i) {
        for(int w = 1; w <= k; ++w) {
            int valori = v[i-1].first;
            int pesoi = v[i-1].second;
 
            if(pesoi > w)
                m[i][w] = m[i-1][w];
            else{
                m[i][w] = max(valori + m[i-1][w - pesoi], m[i-1][w]);
            }
        }
    }
 
    return m[n][k];
}
 
int main(){
    int c,r;
    pair<int,int> p; //valor, peso
 
    cin >> c;
    while(c--) {
        cin >> n;
        v.clear();
        for(unsigned i = 0; i < n; ++i) {
            cin >> p.first >> p.second;
            v.push_back(p);
        }
 
        cin >> k;
        cin >> r;
 
        if(mochila() >= r)
            cout << "Missao completada com sucesso" << endl;
        else
            cout << "Falha na missao" << endl;
    }
}