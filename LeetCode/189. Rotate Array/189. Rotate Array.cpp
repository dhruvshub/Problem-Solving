// Problem Link: https://leetcode.com/problems/rotate-array/description/

#include <iostream>


using namespace std;

void rotate(vector<int>& nums, int k) {
    k = k % nums.size();
    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin()+k);
    reverse(nums.begin()+k, nums.end());
}

int main() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7};
    rotate(a, 3);
    for (int i:a) {
        cout << i << " ";
    }
}