// Problem Link: https://leetcode.com/problems/contains-duplicate/description/

#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

bool containsDuplicate(vector<int>& nums) {
    return unordered_set<int>(nums.begin(), nums.end()).size() < nums.size();
}

int main() {
    vector<int> a = {1,2,3,10};
    cout << containsDuplicate(a);
}