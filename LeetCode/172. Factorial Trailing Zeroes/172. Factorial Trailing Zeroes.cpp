// Problem Link: https://leetcode.com/problems/factorial-trailing-zeroes/description/

#include <iostream>

using namespace std;

int trailingZeroes(int n) {
    int num_zeros = 0;
    for (int i = 5; i < n; i*=5) {
        num_zeros += n/i;
    }
    return num_zeros;
}

int main() {
    cout << trailingZeroes(32);
}