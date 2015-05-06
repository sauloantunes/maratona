#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int primes[3500];
int np = 0;

bool isPrime(int n){
    if(n == 2)
        return true;

    if(n % 2 == 0)
        return false;

    for (int i = 3; i*i <= n; i += 2){
        if(n % i == 0)
            return false;
    }

    return true;
}

void generatePrimes(){
    int n = 2;

    while(np < 3500){
        if(isPrime(n)){
            primes[np] = n;
            np++;
        }
        n++;
    }
}

int josephus(int n, int k){
    if(n == 1)
        return 1;

    return (josephus(n-1, k+1) + primes[k] - 1) % n + 1;
}

int main(){
    int n;

    generatePrimes();

    while(cin >> n, n){
        int pos = 0;
                
        cout << josephus(n, 0) << endl;

    }
}