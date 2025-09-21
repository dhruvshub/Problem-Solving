// Problem Link: https://leetcode.com/problems/maximum-total-subarray-value-i/description/

#include <iostream>
#include <vector>

using namespace std;

long long maxTotalValue(vector<int>& nums, int k) {
    auto max_num = max_element(nums.begin(), nums.end());
    auto min_num = min_element(nums.begin(), nums.end());
    long long diff = (long long)(*max_num) - (long long)(*min_num);
    long long res = (long long)k*(diff);
    return res;
}

int main() {
    vector<int> a = {4,2,5,1};
    cout << maxTotalValue(a, 3);
}