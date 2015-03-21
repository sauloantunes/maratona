#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int v[1000000];
int rankk[1000000];

int findSet(int a){
	return v[a] == a ? a : v[a] = findSet(v[a]);
}

bool isSameSet(int a, int b){
	return findSet(a) == findSet(b);
}

void unionSet(int a, int b){
	if(!isSameSet(a, b)){
		int sa = findSet(a), sb = findSet(b);
		if(rankk[sa] > rankk[sb])
			v[sb] = sa;
		else{
			v[sa] = sb;
			if(rankk[sa] == rankk[sb])
				rankk[sb]++;
		}
	}
}

int main(){
	int t,n;
	string s;

	cin >> t;


	while(t--){
		cin >> n; cin.get(); // the \n after the number		

		for (int i = 0; i <= n; ++i){
			v[i] = i;
			rankk[i] = 0;
		}

		char c;
		int a,b;
		int y=0, n=0;

		while(getline(cin, s)){

			if(s.empty())
				break;			

			sscanf(s.c_str(), ("%c %d %d"), &c, &a, &b);

			if(c == 'c')
				unionSet(a,b);

			if(c == 'q'){
				if(isSameSet(a,b))
					y++;
				else
					n++;
			}

		}

		cout << y << "," << n << endl;

		if(t)
			cout << endl;
	}
}