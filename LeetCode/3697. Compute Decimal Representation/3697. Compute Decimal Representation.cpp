// Problem Link: https://leetcode.com/problems/compute-decimal-representation/description/

#include <iostream>
#include <vector>

using namespace std;

vector<int> decimalRepresentation(int n) {
    vector<int> expanded_form = {};
    long long place_value = 1;
    while (n!=0) {
        int ld = n % 10;
        if (ld!=0) {
            expanded_form.push_back(ld*place_value);
        }
        place_value *= 10;
        n /= 10;
    }
    reverse(expanded_form.begin(), expanded_form.end());
    return expanded_form;
}

int main() {
    vector<int> nums = decimalRepresentation(1034242312);
    for (auto i:nums) {
        cout << i<< " ";
    }
}
