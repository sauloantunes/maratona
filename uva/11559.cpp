#include <iostream>
using namespace std;

#define INF 1<<30

int main(){
	int n; // participants
	int b; // budget
	int h; // hotels
	int w; // weeks
	int price;
	int beds;
	int cheapest;

	while(cin >> n >> b >> h >> w){

		cheapest = INF;
		
		for (int i = 0; i < h; ++i){	
			cin >> price;
			for (int j = 0; j < w; ++j){
				cin >> beds;
				if(beds >= n &&
				   b >= price * n &&
				   price * n < cheapest)
					cheapest = price * n;
			}
		}

		if(cheapest == INF)
			cout << "stay home" << endl;
		else
			cout << cheapest << endl;
	}
}