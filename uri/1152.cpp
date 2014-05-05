#include <iostream>
#include <algorithm>

using namespace std;

typedef struct Aresta{
	int origem;
	int destino;
	int peso;

	bool operator<(const Aresta &A) const{
		return peso < A.peso;
	}

} aresta;

aresta A[200001];

int main(){
	int v,a,o,d;
	int cont;
	long long int soma, menor;

	while(1){
		cin >> v >> a;

		if(v == 0 && a == 0)
			break;

		int* cor = new int[200000];
		int** status = new int*[200000];
		soma = 0;
		cont = 0;
		menor = 0;

		for (int i = 0; i < a; i++)	{
			cin >> A[i].origem >> A[i].destino >> A[i].peso;
			soma += A[i].peso;
			status[i] = NULL;
			cor[i] = i;
		}

		sort(A, A+a);
	
		for (int i = 0; i < a; i++)	{
			o = A[i].origem;
			d = A[i].destino;

			if(status[o] == NULL && status[d] == NULL){	
				menor += A[i].peso;
				status[o] = &cor[i];
				status[d] = &cor[i];
				cont++;
				continue;
			}
		
			if(status[d] == NULL){
				menor += A[i].peso;
				status[d] = status[o];
				cont++;
				continue;
			}
		
			if(status[o] == NULL){
				menor += A[i].peso;
				status[o] = status[d];
				cont++;
				continue;
			}

			if(*(status[o]) != *(status[d]) ){
				menor += A[i].peso;
				*(status[o]) = *(status[d]);
				cont++;
			}

			if(cont == v-1)
				break;

		}
		
		cout << soma - menor << endl;
	}
}