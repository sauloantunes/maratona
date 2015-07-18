#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, inst=1;

	while(cin >> n, n){
		deque<char> dic;

		for (int i = 0; i < 26; ++i)
			dic.push_back('A' + i);

		int msg[n];
		for (int i = 0; i < n; ++i)
			cin >> msg[i];

		cout << "Instancia " << inst++ << endl;

		for (int i = 0; i < n; ++i){
			cout << dic[msg[i]-1];
			char temp = dic[msg[i]-1];
			dic.erase(dic.begin() + msg[i]-1);
			dic.push_front(temp);
		}

		cout << endl << endl;

	}
}