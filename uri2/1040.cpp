#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	float a,b,c,d,e;

	cin >> a >> b >> c >> d;

	float m = (a * 2 + b * 3 + c * 4 + d) / 10;

	cout << fixed << setprecision(1);
	cout << "Media: " << m << endl;

	if(m >= 7){
		cout << "Aluno aprovado." << endl;
		return 0;
	}
	
	if(m < 5){
		cout << "Aluno reprovado." << endl;
		return 0;
	}

	cout << "Aluno em exame." << endl;
	
	cin >> e;
	cout << "Nota do exame: " << e << endl;

	m = (e + m)/2;

	if(m >= 5)
		cout << "Aluno aprovado." << endl;
	else
		cout << "Aluno reprovado." << endl;

	cout << "Media final: " << m << endl;

}