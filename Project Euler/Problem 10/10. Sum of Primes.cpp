// Problem Link: https://projecteuler.net/problem=10

#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n) {
    int sq = sqrt(n);
    for (int i = 2; i <=sq; i++) {
        if (n%i==0) {
            return false;
        }
    }
    return true;
}

int main() {
    long long sum = 0;
    for (int i = 2; i<2000000; i++) {
        if (isPrime(i) == true) {
            sum+=i;
        }
    }
    cout << sum;
}