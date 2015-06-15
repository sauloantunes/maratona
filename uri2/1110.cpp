#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;

	while(cin >> n, n){
		deque<int> v;
		
		for (int i = 1; i <= n; ++i)
			v.push_back(i);
		
		cout << "Discarded cards:";

		int i = 0;

		ostringstream out;

		while(v.begin() + 1 != v.end()){
			out << " " << v[i] << ",";
			v.pop_front();
			v.push_back(v[0]);
			v.pop_front();			
		}

		string s = out.str();
		s.pop_back();
		cout << s << endl;
		cout << "Remaining card: " << v[0] << endl;;
	}
}