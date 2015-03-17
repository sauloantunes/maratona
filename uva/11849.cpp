#include <iostream>
#include <cstdio>
#include <map>

using namespace std;
 
int main(){
    long m,n,x;

    ios_base::sync_with_stdio(false);

    while(cin >> m >> n, m+n){
	    map<long, long> cds;
	    
    	for (long i = 0; i < m; ++i){
	    	cin >> x;
	    	cds[x] = 1;
    	}

    	long c = 0;

    	for (long i = 0; i < n; ++i){
	    	cin >> x;
	    	if(cds.count(x))
	    		c++;
    	}

    	cout << c << endl;
    }
}