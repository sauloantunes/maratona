#include <iostream>

using namespace std;

void dfs(int **g, int ordem){
	int status[ordem];
	int pilha[ordem];
	int topo = -1;
	int ini = 0;
	int visitados = 0;
	int b;
	int flag=1;

	for (int i = 0; i < ordem; i++){
		status[i] = 0;	
	}

	while(visitados < ordem){
		// Pega o vertice inicial
		for (int i = 0; i < ordem; i++)	{
			if(status[i] == 0){
				status[i] = 1;
				visitados++;
				pilha[++topo] = i;
				break;
			}
		}
		
		// Seta o numero de espacos inicial
		b = 2;

		while(topo != -1){
			ini = pilha[topo--];
			for (int j = 0; j < ordem; j++)	{
				if(g[ini][j]){
					for (int k = 0; k < b; ++k)
						cout << " ";
					cout << " " << ini << "-" << j ;

					if(status[j] == 0){
						cout << " pathR(G," << j << ")";
						status[j] == 1;
					

					status[j] = 1;
					visitados++;
					pilha[++topo] = ini;
					ini = j;
					j = -1;
					b += 2;
					flag = 1;
				}
					cout << endl;
				}
				
			}
			
			b -= 2;
		}
		if(flag){
			cout << endl;
			flag = 0;
		}
	}
}

void teste(int **g, int ordem){
	// inicializacao
	int status[ordem];

	for (int i = 0; i < ordem; ++i)
		status[i] = 0;

	int pilha[ordem];
	int topo = -1;
	int ini,b,flag;

	// ciclo mais externo

	while(1){
		// pega o primeiro vertice
		// a cada ciclo, é um subgrafo do grafo principal
		ini = -1;
		for (int i = 0; i < ordem; ++i){
			if(status[i] == 0){
				status[i] = 1;
				ini = i;
				break;
			}
		}	

		if(ini == -1)
			break;

		// inicia o dfs a partir do vertice ini
		pilha[0] = ini;
		topo = 0;
		b = 4;

		while(topo != -1){
			ini = pilha[topo--];
			b -= 2;
			for (int i = 0; i < ordem; i++)	{
				if(g[ini][i] == 1){
					flag = 1;
					cout.width(b);
					cout << " ";
					cout << ini << "-" << i;
					if(status[i] == 0){
						status[i] = 1;
						cout << " pathR(G," << i << ")" ;
					}

					cout << endl;

					g[ini][i] = 2;
					pilha[++topo] = ini;
					b += 2;
					ini = i;
					i = - 1;
					
				}
			}
		}
		if(flag){
			cout << endl;
			flag = 0;
		}

	}
}

int main(){

	int n,v,e,x,y,b,caso=0;

	cin >> n;

	while(caso++ < n){
		cin >> v >> e;
	
		int** g = new int*[v];
		for (int i = 0; i < v; ++i)
			g[i] = new int[v];

		for (int i = 0; i < v; i++)	{
			for (int j = 0; j < v; j++)	{
				g[i][j] = 0;
			}
		}

		for (int i = 0; i < e; i++)	{
			cin >> x >> y;
			g[x][y] = 1;
			//g[y][x] = 1;
		}

		cout << "Caso " << caso << ":" << endl;
		teste(g,v);

	}
}