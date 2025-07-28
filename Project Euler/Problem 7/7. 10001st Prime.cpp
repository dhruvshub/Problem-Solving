// Problem Link: https://projecteuler.net/problem=7

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
    int count = 0;
    int i = 2;
    while (count < 10001) {
        if (isPrime(i) == true) {
            count +=1;
        }
        i++;
    }
    cout << i-1;
}