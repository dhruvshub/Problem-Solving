// Problem Link: https://projecteuler.net/problem=9

#include <iostream>

using namespace std;

int main() {
    for (int n=1;n<1000;n++) {
        for (int m=n+1; m<1000;m++) {
            int a = (m*m) - (n*n);
            int b = 2*m*n;
            int c = (m*m) + (n*n);
            if (a+b+c == 1000) {
                cout << a << endl << b << endl << c << endl << "Answer is: " << a*b*c;
                break;
            }
        }
    }
}