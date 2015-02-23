#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int n;

	cin >> n;

	while(n--){
		int a,b;
		int ga=0, gb=0, gfa=0, gfb=0, wa=0, wb=0;

		for (int i = 0; i < 2; ++i){
			if(i == 0)
				scanf("%d x %d", &a, &b);
			else
				scanf("%d x %d", &b, &a);

			ga += a;
			gb += b;

			if(a > b)
				wa++;
			if(b > a)
				wb++;

			if(i == 0)
				gfb = b;
			else
				gfa = a;
		}

		//wins
		if(wa > wb){
			cout << "Time 1" << endl;
			continue;
		}

		if(wa < wb){
			cout << "Time 2" << endl;
			continue;
		}
		
		//goal
		if(ga > gb){
			cout << "Time 1" << endl;
			continue;
		}

		if(ga < gb){
			cout << "Time 2" << endl;
			continue;
		}

		if(gfa > gfb){
			cout << "Time 1" << endl;
			continue;
		}
		
		if(gfa < gfb){
			cout << "Time 2" << endl;
			continue;
		}

		cout << "Penaltis" << endl;

	}
}