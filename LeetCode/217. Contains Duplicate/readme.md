## 217. Contains Duplicate

Problem Link: [LeetCode](https://leetcode.com/problems/contains-duplicate/description/)

I have used unordered set for my solution. Basically, I am checking if the lenght of the unordered set created from `nums` is less or not. If yes, then return true otherwise return false.

```c++
bool containsDuplicate(vector<int>& nums) {
    return unordered_set<int>(nums.begin(), nums.end()).size() < nums.size();
}
```
Time Complexity: O(n)  
Space Complexity: O(n)