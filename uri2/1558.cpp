#include <bits/stdc++.h>

using namespace std;

int main(){
	set<int> m;

	for (int i = 0; i < 101; ++i)
		for (int j = i; j < 101; ++j)
			m.insert(i*i+ j*j);
		
	int n;
	while(cin >> n){
		if(m.count(n))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}