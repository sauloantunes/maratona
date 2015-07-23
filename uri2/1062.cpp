#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, t;

	while(cin >> n, n){
		while(cin >> t, t){
			deque<int> q, s;
			for (int i = 0; i < n; ++i)
				q.push_back(n - i);

			for (int i = 0; i < n; ++i){
				if(i)
					cin >> t;

				if(!s.empty() && s.back() == t){
					s.pop_back();
					continue;
				}

				while(!q.empty()){
					s.push_back(q.back());
					q.pop_back();
					if(s.back() == t)
						break;
				}

				if(s.back() == t)
					s.pop_back();
				else while(++i < n)
					cin >> t;
			}

			if(q.empty() && s.empty())
				cout << "Yes" << endl;
			else
				cout << "No" << endl;
		}

		cout << endl;
	}
}