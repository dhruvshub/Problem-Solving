// Problem Link: https://projecteuler.net/problem=15

#include <iostream>

using namespace std;

long long possible_paths(int n, int k) {
    long long res = 1;
    for (int i = 1; i<=k; ++i) {
        res *= (n - i + 1);
        res /= i;
    }
    return res;
}

int main() {
    int grid_size = 20;
    long long paths = possible_paths(2*grid_size, grid_size);
    cout << paths;
}