#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <cmath>
using namespace std;
 
//MAX [500 x (500-1)] : 2
#define MAX 124750
 
struct Arestas{
    int o;
    int d;
    float w;
    Arestas(){}
    Arestas(int o, int d, float w) :
        o(o), d(d), w(w) {}
 
    bool operator < (const Arestas& a) const{
        return w < a.w;
    }
};
 
Arestas       a[MAX];
pair<int,int> p[500];
int   n;
int   cont;
int   dispo;
int   cor[500];
int*  pcor[500];
float soma;
 
 
float dist(int x1, int y1, int x2, int y2){
    return sqrt( pow(x1-x2,2) + pow(y1-y2,2) );
}
 
void kruskal(){
    dispo = 0;
    cont  = 0;
    soma  = 0;
 
    for (int i = 0; i < n; ++i){
        cor[i]  = i;
        pcor[i] = NULL;
    }
     
    for (int i = 0; i < n; ++i){
        if(cont == n-1)
            break;
 
        if(pcor[ a[i].o ] == NULL && pcor[ a[i].d ] == NULL){
            pcor[ a[i].o ] = &cor[dispo];
            pcor[ a[i].d ] = &cor[dispo];
            dispo++;
            cont++;
            soma += a[i].w;         
            continue;
        }
 
        if(pcor[ a[i].o ] == NULL){
            pcor[ a[i].o ] = pcor[ a[i].d ];
            cont++;
            soma += a[i].w;
            continue;
        }
 
        if(pcor[ a[i].d ] == NULL){
            pcor[ a[i].d ] = pcor[ a[i].o ];
            cont++;
            soma += a[i].w;
            continue;
        }
 
        if(*pcor[ a[i].o ] != *pcor[ a[i].d ]){
            *pcor[ a[i].o ] = *pcor[ a[i].d ];
            cont++;
            soma += a[i].w;
            continue;
        }
 
// Didatico
//      if(*pcor[ a[i].o ] == *pcor[ a[i].d ]){
//          continue;
//      }
 
    }   
}
 
int main(){
    int c;
 
    cin >> c;
    while(c--){
        cin >> n;
        for (int i = 0; i < n; ++i)
            cin >> p[i].first >> p[i].second;
         
        int pos=0;
 
        for (int i = 0; i < n; ++i)
            for (int j = i+1; j < n; ++j){               
                float w = dist(p[i].first, p[i].second, p[j].first, p[j].second);
                a[pos++] = Arestas(i,j,w);
            }
 
        sort(a, a + pos);
        kruskal();
        printf("%.2f\n", soma/100);
    }
}