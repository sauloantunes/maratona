#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>

using namespace std;

struct team{
	string name;
	int pts;
	int wins;
	int goals;
	int pos;

	bool operator < (const team& t) const {
		if(pts != t.pts)
			return pts < t.pts;
		if(wins != t.wins)
			return wins < t.wins;
		if(goals != t.goals)
			return goals < t.goals;
		return !(pos < t.pos);
	}
};

int main(){
	int t,n,m;
	string s;

	cin >> t;

	while(t--){
		cin >> n >> m;

		map <string, int> pos;
		vector <struct team> teams;
		
		for (int i = 0; i < n; ++i){
			cin >> s;
			pos[s] = i;
			struct team aux = {s, 0, 0, 0,i};
			teams.push_back(aux);
		}


		string t1,t2;
		int g1,g2;

		for (int i = 0; i < m; ++i){
			cin >> g1 >> t1 >> g2 >> t2;
		
			teams[pos[t1]].goals += g1;
			teams[pos[t2]].goals += g2;

			if(g1 > g2){
				teams[pos[t1]].pts += 3;
				teams[pos[t1]].wins++;
			}
			if(g2 > g1){
				teams[pos[t2]].pts += 3;
				teams[pos[t2]].wins++;
			}
			if(g1 == g2){
				teams[pos[t1]].pts++;
				teams[pos[t2]].pts++;
			}
		}


		sort(teams.rbegin(), teams.rend());

		for (int i = 0; i < n; ++i)
			cout << teams[i].name << endl;
	}
}