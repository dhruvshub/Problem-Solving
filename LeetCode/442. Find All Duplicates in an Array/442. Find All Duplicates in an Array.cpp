// Problem Link: https://leetcode.com/problems/find-all-duplicates-in-an-array/description/

#include <iostream>
#include <vector>

using namespace std;

vector<int> findDuplicates(vector<int>& nums) {
    vector<int> res;
    for (int i = 0; i<nums.size(); ++i) {
        int index = abs(nums[i]) - 1;
        if (nums[index] < 0) {
            res.push_back(index + 1);
        }
        else {
            nums[index] *= -1;
        }
    }
    return res;
}

int main() {
    vector<int> a ={4,3,2,7,8,2,3,1};
    vector<int> ans = findDuplicates(a);
    for(int i:ans){
        cout << i << " ";
    }
}