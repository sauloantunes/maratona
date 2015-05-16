#include <iostream>
#include <iomanip>
#include <string>
#include <cstdio>
#include <map>

using namespace std;

int main(){
	int n;
	string s;
	bool first = true;


	cin >> n;
	getline(cin, s);
	getline(cin, s);

	while(n--){		
		float q = 0;
		map<string, int> trees;

		while(getline(cin, s)){
			if(s.empty())
				break;

			if(trees.find(s) != trees.end())
				trees[s]++;
			else
				trees[s] = 1;
			q++;
		}

		map<string, int>::iterator it = trees.begin();

		if(!first)
			printf("\n");
		
		first = false;

		for (it; it != trees.end(); it++){
			float r = 100.0 * it->second/q;
			printf("%s %.4f\n", it->first.c_str(), r);
		}		
	}
}