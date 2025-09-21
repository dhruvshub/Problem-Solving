// Problem Link: https://leetcode.com/problems/intersection-of-two-arrays/description/

#include <iostream>
#include <set>
#include <unordered_set>

using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    unordered_set<int> s = {nums1.begin(), nums1.end()};
    unordered_set<int> res = {};

    for (int i:nums2) {
        if (s.count(i) != 0) {
            res.insert(i);
        }
    }
    vector<int> intersection = {res.begin(), res.end()};
    return intersection;
}

int main() {
    vector<int> nums1 = {1,2,2,113, 2, 2, 2};
    vector<int> nums2 = {2,2,113,2, 2, 2};
    vector<int> res = intersection(nums1,nums2);
    for (int i: res) {
        cout << i << " ";
    }
}

