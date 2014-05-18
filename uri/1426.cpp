#include <iostream>
#include <cstring>
 
using namespace std;
 
int m[10][10];
 
int main(){
    int n;
    cin >> n;
    while(n--){
 
        //leitura
        for(unsigned i = 1; i <= 9; i += 2) {
            int qtd = (i + 1)/2; // itens por linha
            for(unsigned j = 1, k=1; k <= qtd; k++, j += 2)
                cin >> m[i][j];
        }
 
        //ultima linha
        for(unsigned i = 1; i <= 7; i += 2)
            m[9][i+1] = (m[7][i] - m[9][i] - m[9][i+2])/2;
         
        //demais linhas
        for(unsigned i = 8; i > 1; i--) {
            for(unsigned j = 1; j <= i; ++j) 
                m[i][j] = m[i+1][j] + m[i+1][j+1];
        }
 
        //saida
        for(unsigned i = 1; i < 10; ++i) {
            for(unsigned j = 1; j <= i; ++j){
                cout << m[i][j];
                if(j != i)
                    cout << " ";
            }
             
            cout << endl;
        }
    }   
}