// Problem Link: https://projecteuler.net/problem=16

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    string res = to_string(pow(2, 1024));
    int sum = 0;
    for (auto i: res) {
        if (i == '.') {
            break;
        }
        sum += static_cast<int>(i) - '0';
    }
    cout << sum;
}