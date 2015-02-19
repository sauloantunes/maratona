#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int d1, h1, m1, s1, d2, h2, m2, s2;
	long int t,t1,t2;

	scanf("Dia %d", &d1);
	scanf("%d : %d : %d\n", &h1, &m1, &s1);

	scanf("Dia %d", &d2);
	scanf("%d : %d : %d", &h2, &m2, &s2);

	t1 = h1 * 3600 + m1 * 60 + s1;

	t2 = (d2 - d1) * 86400 + h2 * 3600 + m2 * 60 + s2;

	t = t2 - t1;

	int d,h,m,s;

	d =  t / 86400;
	h = (t % 86400) / 3600;
	m = (t % 3600) / 60;
	s =  t % 60;

	cout << d << " dia(s)" << endl;
	cout << h << " hora(s)" << endl;
	cout << m << " minuto(s)" << endl;
	cout << s << " segundo(s)" << endl;
}
