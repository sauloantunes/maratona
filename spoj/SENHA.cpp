#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main(){
	int d,e,n;
	int test = 1;

	while(cin >> n, n){

		vector < set<int> > passw(6);
		for (int i = 0; i < 6; ++i)
			for (int j = 0; j < 10; ++j)
				passw[i].insert(j);
		
		while(n--){			
			vector < pair<int, int> > num;
			for (int i = 0; i < 5; ++i){
				cin >> d >> e;
				num.push_back(make_pair(d,e));
			}
						
			char c;
			for (int i = 0; i < 6; ++i){
				cin >> c;

				d = num[c-'A'].first;
				e = num[c-'A'].second;

				set<int>::iterator it = passw[i].begin();
				for (it; it != passw[i].end(); ++it){
					if(*it != d && *it != e)
						passw[i].erase(*it);
				}
			}				
		}

		cout << "Teste " << test++ << endl;
		for (int i = 0; i < 6; ++i){
			set<int>::iterator it = passw[i].begin();
			cout << *it << " ";
		}
		cout << endl << endl;
	}
}