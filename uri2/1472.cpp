#include <iostream>

using namespace std;

int v[100001];
int sum[100001];

int bs(int lo, int hi, int tg){
	while(lo <= hi){
		int md = (lo + hi) / 2;

		if(sum[md] == tg)
			return md;

		if(tg > sum[md])
			lo = md + 1;
		else
			hi = md - 1;
	}

	return -1;
}

int main(){
	int n;

	while(cin >> n){
		for (int i = 0; i < n; ++i)
			cin >> v[i];
		
		sum[0] = 0;
		for (int i = 0; i < n; ++i)
			sum[i] = v[i-1] + sum[i-1];
		
		int total = sum[n-1] + v[n-1];
		int part = total/3;
		int tg = 0;

		if(total % 3){
			cout << 0 << endl;
			continue;
		}

		for (int i = 0; i < n; ++i){
			if(bs(i, n-1, sum[i] + part) != -1 && bs(i, n-1, sum[i] + part * 2) != -1)
				tg++;
		}

		cout << tg << endl;
	}
}