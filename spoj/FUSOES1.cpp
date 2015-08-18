#include <bits/stdc++.h>

using namespace std;

int b[100002];

int findSet(int b1){
	if(b[b1] == b1)
		return b1;
	else
		return b[b1] = findSet(b[b1]);
}

bool isSameSet(int b1, int b2){
	return findSet(b1) == findSet(b2);
}

void joinSet(int b1, int b2){
	b1 = findSet(b1);
	b2 = findSet(b2);
	b[b2] = b1;
}


int main(){
	int n, k;

	cin >> n >> k;

	for (int i = 1; i <= n; ++i)
		b[i] = i;
	
	char c;
	int b1, b2;

	for (int i = 0; i < k; ++i){
		cin >> c >> b1 >> b2;

		if(c == 'F')
			joinSet(b1, b2);
		else if(isSameSet(b1, b2))
			cout << "S\n";
		else
			cout << "N\n";
	}
}