## 442. Find All Duplicates in an Array

Problem Link: [LeetCode](https://leetcode.com/problems/find-all-duplicates-in-an-array/description/)

## Brute Force Solution

This uses array based hashing, taking the advantage of the fact that `nums` has it's elements from `1` to `n`, where `n` is `nums.size()`

```c++
vector<int> findDuplicates(vector<int>& nums) {
    vector<int> table(nums.size()+1, 0);
    for(int i = 0; i<nums.size(); ++i){
        table[nums[i]] +=1;
    }
    vector<int> res = {};
    for(int j = 0; j < table.size(); ++j){
        if(table[j] == 2){
            res.push_back(j);
        }
    }
    return res;
}
```

Time Complexity: $O(n)$  
Space Complexity: $O(n)$

## Special Solution

The problem has a special requirement i.e. we must solve it in constant space. I couldn't get it on my own, I had to look at the solution.
This is how it works:
- `nums` has it's elements from `1` to `n`, where `n` is `nums.size()`
- So, each element in `nums` corresponds to a valid index, i.e. `element's value - 1`
- So, we run a for loop from `i = 0` to `i = nums.size()`
  - Whenever, we visit an element for the first time we convert it to negative of itself. 
  - This way, when we again visit the same element we'll know that it has been already visited and is a duplicate.

```c++
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
```
Time Complexity: $O(n)$  
Space Complexity: $O(1)$