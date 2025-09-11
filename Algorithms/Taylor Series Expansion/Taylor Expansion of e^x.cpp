#include <iostream>

using namespace std;

// Direct Taylor Expansion

// Iterative version
double taylor(double x, int n) {
    double res = 1.0;
    double p=1;
    int f=1;

    for (int i = 1; i <= n; ++i) {
        p*=x;
        f*=i;
        res+=p/f;
    }
    return res;
}

// Recursive version
double taylor_recursive(double x, int n) {
    static double p=1, f=1;
    double res;
    if (n==0) {
        return 1;
    }
    res = taylor_recursive(x, n-1);
    p*=x;
    f*=n;

    return res+p/f;

}


// Taylor expansion using Horner's method

// This is iterative version

double taylor_horner(double x, int n) {
    double res = 1.0;
    for (int i = n; i>0; --i) {
        res = 1.0 + (x/i)*res;
    }
    return res;
}

// This is recursive version
double taylor_horner_recursive(double x, int n) {
    static double res = 1.0;
    if (n==0) {
        return res;
    }
    res = 1 + (x/n)*res;
    return taylor_horner_recursive(x, n-1);
}

int main() {
    cout << taylor(2, 10) << endl;
    cout << taylor_recursive(2, 10) << endl;
    cout << taylor_horner(2, 10) << endl;
    cout << taylor_horner_recursive(2, 10) << endl;
}

