#include <iostream>
#include <string>

using namespace std;


typedef struct Pos{
	int l;
	int c;
	int m;

	bool operator==(const Pos p) const{
		return (p.l == l && p.c == c);
	}

} pos;

pos lista[1000000];

int main(){
	string a,b;

	while(cin >> a >> b){
		pos ori, des, atual;
		ori.l = (int)a[0] - 96;
		ori.c = (int)a[1] - 48;
		ori.m = 0;
		des.l = (int)b[0] - 96;
		des.c = (int)b[1] - 48;

		int prox = 0;
		int ult = 0;
		lista[0] = ori;

		while(1){
			atual = lista[prox++];
			if(atual == des)
				break;

			if(atual.l + 2 < 9){
				if(atual.c + 1 < 9){
					ult++;
					lista[ult].l = atual.l + 2;
					lista[ult].c = atual.c + 1;
					lista[ult].m = atual.m + 1;
				}

				if(atual.c - 1 > 0){
					ult++;
					lista[ult].l = atual.l + 2;
					lista[ult].c = atual.c - 1;
					lista[ult].m = atual.m + 1;
				}
			}


			if(atual.l - 2 > 0){
				if(atual.c + 1 < 9){
					ult++;
					lista[ult].l = atual.l - 2;
					lista[ult].c = atual.c + 1;
					lista[ult].m = atual.m + 1;
				}

				if(atual.c - 1 > 0){
					ult++;
					lista[ult].l = atual.l - 2;
					lista[ult].c = atual.c - 1;
					lista[ult].m = atual.m + 1;
				}

			}

			if(atual.c + 2 < 9){
				if(atual.l + 1 < 9){
					ult++;
					lista[ult].l = atual.l + 1;
					lista[ult].c = atual.c + 2;
					lista[ult].m = atual.m + 1;
				}

				if(atual.l - 1 > 0){
					ult++;
					lista[ult].l = atual.l - 1;
					lista[ult].c = atual.c + 2;
					lista[ult].m = atual.m + 1;
				}

			}

			if(atual.c - 2 > 0){
				if(atual.l + 1 < 9){
					ult++;
					lista[ult].l = atual.l + 1;
					lista[ult].c = atual.c - 2;
					lista[ult].m = atual.m + 1;
				}

				if(atual.l - 1 > 0){
					ult++;
					lista[ult].l = atual.l - 1;
					lista[ult].c = atual.c - 2;
					lista[ult].m = atual.m + 1;
				}

			}

		}

		cout << "To get from " << a << " to " << b << " takes " << atual.m << " knight moves." << endl;

	}
}