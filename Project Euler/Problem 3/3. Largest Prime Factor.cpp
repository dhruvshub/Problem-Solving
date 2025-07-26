// Problem Link: https://projecteuler.net/problem=3

#include <iostream>

using namespace std;

int primeFactor(long number, int* arr) {
    int index = 0;
    while (number % 2 == 0) {
        // cout << 2 << endl;
        arr[index] = 2;
        index+=1;
        number = number / 2;
    }

    for (int i=3;i*i<number;i+=2) {
        while (number % i == 0) {
            // cout << i << endl;
            arr[index] = i;
            index+=1;
            number = number / i;
        }
    }

    if (number>2) {
        // cout << number << endl;
        arr[index] = number;
        index+=1;
    }
    return index-1;
}

int main() {
    long target = 600851475143;
    int arr[] = {};
    int index = primeFactor(target, arr);

    cout << arr[index] << endl;
    return 0;
}
