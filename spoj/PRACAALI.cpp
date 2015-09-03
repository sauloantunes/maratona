#include <bits/stdc++.h>

using namespace std;

int main(){
	long n, h, m, s, e;
	long long t;
	char c;

	while(cin >> n, n){
		vector< pair<long long, char> > v;
		e = 0;
		int numE = 0;

		for (int i = 0; i < n; ++i){
			scanf("%ld:%ld:%ld %c", &h, &m, &s, &c);

			t = h*3600 + m*60 + s;
			v.push_back( make_pair(t,c));

			if(c == 'E')
				numE++;
		}

		sort(v.begin(), v.end());

		int qtd=0, maior=0;

		for (int i = 0; i < n; ++i){
			if(v[i].second == 'E'){
				qtd++;
				e++;
				numE--;
			}
			
			else if(v[i].second == 'X'){
				qtd--;
			}

			else{
				if(qtd == 0){
					qtd++;
					e++;
				}
				else if(e + numE < n/2){
					qtd++;
					e++;
				}
				else{
					qtd--;
				}
			}

			maior = max(maior, qtd);
		}

		cout << maior << endl;
	}
}
