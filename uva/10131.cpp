#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

struct Elephant{
	int w,s,i;
	Elephant();
	Elephant(int w, int s, int i) : w(w), s(s), i(i){}

	bool operator < (const Elephant& e) const{
		return s < e.s;
	}


	bool operator > (const Elephant& e) const{
		return s > e.s;
	}
};

int main(){
	int w,s;
	int pos = 0;
	vector<Elephant> V;

	while(cin >> w >> s)
		V.push_back(Elephant(w,s,++pos));

	sort(V.rbegin(), V.rend());

	int best[V.size()];
	int next[V.size()];
	memset(next,0,sizeof(next));

	int maior = 0;
	int ini = 0;

	for (int i = V.size() - 1; i >= 0; i--){
		best[i] = 1;

		for (int j = i; j < V.size(); ++j){
			if(V[j].w > V[i].w && best[j] + 1 > best[i]){
				best[i] = best[j] + 1;
				next[i] = j;
				if(best[i] > maior){
					maior = best[i];
					ini = i;
				}
			}
		}
	}
	
	cout << maior << endl;

	while(1){
		cout << V[ini].i << endl;
		ini = next[ini];
		if(!ini) break;
	}
}