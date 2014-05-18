#include <iostream>
using namespace std;
 
int main(){
    int n;
    int v[] = {6,2,5,5,4,5,6,3,7,6};
    cin >> n;
 
    while(n--){
        string num;
        long long int total=0;
        cin >> num;
        for(unsigned i = 0; i < num.size(); ++i)
            total += v[num[i] - 48];
 
        cout << total << " leds" << endl;
    }
}