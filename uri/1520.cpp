#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int n,x,y,p,flag;

	while(cin >> n){
		vector<int> v;
		while(n--){
			cin >> x >> y;
			for (int i = x; i <= y ; i++)
				v.push_back(i);
		}
		sort(v.begin(), v.end());
		cin >> x;
		flag = 0;
		for (int i = 0; i < v.size(); i++){
			if(v[i] == x){
				for (int j = i; j < v.size(); j++){
					if(v[j] != x){
						cout << x << " found from " << i << " to " << j-1 << endl;
						flag = 1;
						break;		
					}
					if(j == v.size()-1){
						cout << x << " found from " << i << " to " << j << endl;
						flag = 1;
						break;		
					}


				}
			break;
			}
		}
		if(!flag)
			cout << x << " not found" << endl;

	}
}