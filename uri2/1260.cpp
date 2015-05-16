#include <iostream>
#include <iomanip>
#include <string>
#include <cstdio>
#include <map>

using namespace std;

int main(){
	int n;
	string s;

	cin >> n;
	cin.ignore(2);

	while(n--){		
		int q = 0;
		map<string, int> trees;

		while(getline(cin, s) && !s.empty()){
			if(trees.find(s) != trees.end())
				trees[s]++;
			else
				trees[s] = 1;
			q++;
		}

		map<string, int>::iterator it = trees.begin();

		for (it; it != trees.end(); it++)
			printf("%s %.4f\n", it->first.c_str(), 100.0 * it->second/q);

		if(n)
			cout << endl;
	}
}