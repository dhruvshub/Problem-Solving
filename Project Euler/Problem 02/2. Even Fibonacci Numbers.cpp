// Problem Link: https://projecteuler.net/problem=2

#include <iostream>

using namespace std;

int main() {
    int i=1;
    int j=2;
    int next = 0;
    int sum = 0;
// 1, 2, 3, 5, 8
    while (j < 4000000) {
        next = i+j;
        if (j%2==0) {
            sum+=j;
        }
        i = j;
        j = next;
    }
    cout << sum;
    return 0;
}