#include <bits/stdc++.h>

using namespace std;

int getTime(int y, int m, int d){
	int days = 0;
	int mdays[] = {31,28,31,30,31,30,31,31,30,31,30,31};

	days += d;

	for (int i = 0; i < m; ++i)
		days += mdays[i];
	
	if(m > 1)
		if( (y % 400 == 0) || ((y % 4 == 0) && (y % 100)) )
			days++;

	while(--y > 1968){
		days += 365;
		if( (y % 400 == 0) || ((y % 4 == 0) && (y % 100)) )
			days++;
	}

	return days;
}

int main(){
	int d, m, y, n;

	cin >> n;

	while(n--){
		scanf("%d-%d-%d", &y, &m, &d);
		int t1 = getTime(y,m-1,d);
		
		scanf("%d-%d-%d", &y, &m, &d);
		int t2 = getTime(y,m-1,d);

		cout << abs(t1-t2) << endl;
	}
}