#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, g, h, v;

	while(cin >> n >> g){
		vector<int> d;
		int pts = 0;

		for (int i = 0; i < n; ++i){
			cin >> h >> v;

			if(h > v)
				pts += 3;

			else if(h < v)
				d.push_back(v - h);

			else if(g){
					pts += 3;
					g--;
				} else
					pts++;
		}

		sort(d.begin(), d.end());

		for (int i = 0; i < d.size(); ++i){
			if(d[i] < g){
				pts += 3;
				g -= d[i] + 1;
				continue;
			}
			
			if(d[i] == g){
				pts++;
				g -= d[i];
				continue;
			}

			break;
		}

		cout << pts << endl;
	}
}