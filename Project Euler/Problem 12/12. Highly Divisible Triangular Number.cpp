// Problem Link: https://projecteuler.net/problem=12

#include <iostream>

using namespace std;

int count_divisors(int n) {
    int num_divisors = 0;
    for (int i =1;i*i<=n;++i) {
        if (n%i == 0) {
            num_divisors+=2;
            if (i*i==n) {
                num_divisors--;
            }
        }
    }
    return num_divisors;
}

int main() {
    int n = 1;
    int sum = 0;
    while (true) {
        sum = (n*(n+1))/2;
        if (count_divisors(sum)>500) {
            cout << sum;
            break;
        }
        n++;
    }
}