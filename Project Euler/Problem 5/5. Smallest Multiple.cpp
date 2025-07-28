// Problem Link: https://projecteuler.net/problem=5

#include <iostream>

using namespace std;

int main() {
    long i = 20;
    bool div = false;

    while (div==false) {
        for (int j=2;j<=20;j++) {
            if (i%j!=0) {
                div = false;
                break;
            }
            div = true;
        }
        i++;
    }

    cout << i-1;

}

