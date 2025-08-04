// Problem Link: https://projecteuler.net/problem=4

#include <iostream>
#include <cmath>

using namespace std;

int isPalindrome(int n) {
    int temp = n;
    int rev = 0;

    while (n!=0) {
        int ld = n % 10;
        rev = (rev * 10) + ld;
        n = floor(n/10);
    }

    if (rev == temp) {
        return 1;
    }
    else {
        return 0;
    }
}

int maxPalindrome() {
    int max = 0;
    int i = 999;
    int j = 999;
    while (i > 99) {
        while (j > 99) {
            int product = i*j;
            if (isPalindrome(product) == 1) {
                if (max < product) {
                    max = product;
                }
            }
            j--;
        }
        j = 999;
        i--;
    }
    return max;
}

int main() {
    int res = maxPalindrome();
    cout << res;
}