//17:11
//18:11

#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

double b[9];
double img[102][102];
double nova[102][102];

int main(){
	int l, c;

	while(cin >> l >> c){

		memset(img,0,sizeof(img));

		for (int i = 1; i < l+1; ++i)
			for (int j = 1; j < c+1; ++j)
				scanf("%lf", &img[i][j]);

		for (int i = 0; i < 9; ++i)
				scanf("%lf", &b[i]);


		for (int i = 1; i < l+1; ++i){
			for (int j = 1; j < c+1; ++j){
				nova[i][j]  = b[0]*img[i-1][j-1];
				nova[i][j] += b[1]*img[i-1][j];
				nova[i][j] += b[2]*img[i-1][j+1];

				nova[i][j] += b[3]*img[i][j-1];
				nova[i][j] += b[4]*img[i][j];
				nova[i][j] += b[5]*img[i][j+1];
				
				nova[i][j] += b[6]*img[i+1][j-1];
				nova[i][j] += b[7]*img[i+1][j];
				nova[i][j] += b[8]*img[i+1][j+1];
				nova[i][j] /= 9.0;
			}
		}


		for (int i = 1; i < l+1; ++i){
			for (int j = 1; j < c+1; ++j)
				printf("%.2lf ", nova[i][j]);
			cout << endl;
		}
	}
}
