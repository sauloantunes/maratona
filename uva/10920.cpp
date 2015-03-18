#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int sz, p;

	while(cin >> sz >> p, sz+p){
		int last=1, layer=0;

		while(last < p){
			layer++;
			last = (2*layer + 1) * (2*layer + 1);
		}

		int x,y;
		x = y = (sz/2 + 1) + layer; // position of the last

		int move = 2*layer;

		if(p >= last - move){
			y -= last - p;			
		}
		else{
			last -= move;
			y -= move;
			if(p >= last - move){
				x -= last - p;
			}
			else{
				last -= move;
				x -= move;
				if(p >= last - move){
					y += last - p;
				}
				else{
					last -= move;
					y += move;
					x += last - p;
				}
			}
		}

		printf("Line = %d, column = %d.\n", y, x);
	}
}