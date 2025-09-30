// Problem Link: https://leetcode.com/problems/find-triangular-sum-of-an-array/description/

#include <iostream>
#include <vector>

using namespace std;

int triangularSum(vector<int>& nums) {
    int n = nums.size();
    while (n>1) {
        for (int i = 1; i<n;++i) {
            nums[i-1] = (nums[i-1] + nums[i])%10;
        }
        n-=1;
    }
    return nums[0];
}

int main() {
    vector<int> a = {1,2,3,4,5};
    cout << triangularSum(a);
}