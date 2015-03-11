#include <iostream>
#include <string>
#include <climits>

using namespace std;

int main(){
	int b1, g1, c1, b2, g2, c2, b3, g3, c3;

	while(cin >> b1){
		cin >> g1 >> c1 >> b2 >> g2 >> c2 >> b3 >> g3 >> c3;

		string s;
		int m, p=INT_MAX;
		
		//BCG
		m = b2 + b3 +
			c1 + c3 +
			g1 + g2;

		if(m < p){
			s = "BCG";
			p = m;
		}

		//BGC
		m = b2 + b3 +
			g1 + g3 +
			c1 + c2;

		if(m < p){
			s = "BGC";
			p = m;
		}

		//CBG
		m = c2 + c3 +
			b1 + b3 +
			g1 + g2;

		if(m < p){
			s = "CBG";
			p = m;
		}

		//CGB
		m = c2 + c3 +
			g1 + g3 +
			b1 + b2;

		if(m < p){
			s = "CGB";
			p = m;
		}

		//GBC
		m = g2 + g3 +
			b1 + b3 +
			c1 + c2;
		
		if(m < p){
			s = "GBC";
			p = m;
		}

		//GCB
		m = g2 + g3 +
			c1 + c3 +
			b1 + b2;
		
		if(m < p){
			s = "GCB";
			p = m;
		}

		cout << s << " " << p << endl;
	}
}