#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	int a,b,c;

	while(cin >> a >> b, a+b){
		set <int> sa, sb;

		for (int i = 0; i < a; ++i){
			cin >> c;
			sa.insert(c);
		}

		for (int i = 0; i < b; ++i){
			cin >> c;
			sb.insert(c);
		}

		set<int>::iterator it = sb.begin();

		while(it != sb.end()){
			if(sa.find(*it) != sa.end()){
				sa.erase(*it);
				sb.erase(it++);
			}
			else		
				it++;
		}

		cout << min(sb.size(), sa.size()) << endl;
	}
}