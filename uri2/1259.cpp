#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, num;

	vector<int> odd, even;

	cin >> n;

	while(n--){
		cin >> num;
		if(num & 1)
			even.push_back(num);
		else
			odd. push_back(num);
	}

	sort(odd.begin(), odd.end());
	sort(even.rbegin(), even.rend());

	for (int i = 0; i < odd.size(); ++i)
		cout << odd[i] << endl;

	for (int i = 0; i < even.size(); ++i)
		cout << even[i] << endl;
}