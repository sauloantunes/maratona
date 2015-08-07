#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;

	cin >> t;

	while(t--){
		long long n, k, s;
		cin >> n >> k >> s;

		long long v[n];
		v[0] = s;
		for (int i = 1; i < n; ++i)
		    v[i] = (1LL*v[i-1]*1103515245 + 12345) % (2147483648LL);

		long long maior=0, soma=0, pos;

		for (int i = 0; i < k; ++i){
			if(v[i] >= maior){
				maior = v[i];
				pos = i;
			}
		}

		soma += maior;

		for (int i = k; i < n; ++i){
			if(i >= pos + k){
				maior = 0;
				for (int j = pos + 1; j <= i; j++){
					if(v[j] >= maior){
						maior = v[j];
						pos = j;
					}
				}
			}

			if(v[i] >= maior){
				maior = v[i];
				pos = i;
			}

			soma += maior;
		}
		
		cout << soma << endl;		
	}
}