// Problem Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/

#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int>& nums) {
    int k = 0;
    int i  = 1;
    while (i<nums.size()) {
        if (nums[i] != nums[k]) {
            k+=1;
            nums[k] = nums[i];
        }
        i++;
    }
    return k+1;
}

int main() {
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    cout << removeDuplicates(nums) << endl;

    for (int i:nums) {
        cout << i << " ";
    }
}