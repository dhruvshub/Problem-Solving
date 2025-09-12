// Problem Link: https://leetcode.com/problems/fibonacci-number/description/

#include <iostream>

using namespace std;


// This problem is tagged with recursion, so I used this approach
// If you want to see other approaches see the algorithms directory

int real_fib(int n, vector<int>&arr){
    if(arr[n]!=-1){
        return arr[n];
    }
    if(n<=1){
        arr[n] = n;
        return n;
    }
    return arr[n] = real_fib(n-2, arr) + real_fib(n-1, arr);
}
int fib(int n) {
    vector<int> arr(n+1, -1);
    return real_fib(n, arr);
}

int main() {
    int n = 10;
    cout << fib(n) << endl;
}