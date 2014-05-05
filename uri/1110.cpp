#include <iostream>
#include <queue>

using namespace std;

int main(){
	int n;

	while(1){
		cin >> n;
		if(!n) break;
		queue <int> fila;

		for (int i = 1; i <= n; ++i)
			fila.push(i);
		
		int flag = 0;
		cout << "Discarded cards: ";

		while(fila.size() > 1){
			if(flag)
				cout << ", ";
			flag = 1;
			cout << fila.front();
			fila.pop();
			fila.push(fila.front());
			fila.pop();
		}

		cout << endl;
		cout << "Remaining card: " << fila.front() << endl;
	}
}