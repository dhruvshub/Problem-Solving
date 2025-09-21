## 3689. Maximum Total Subarray Value I

Problem Link: [LeetCode](https://leetcode.com/problems/maximum-total-subarray-value-i/description/)

This was a trick question in the contest, if you read the problem statement closely enough, the answer is there only.
We can use the same sub-array multiple times. So, no need to find the subarrays. Just find and return this: 

$$k*(max - min)$$

Just make sure that you have cast it to `long long` instead of `int`.

```c++
long long maxTotalValue(vector<int>& nums, int k) {
    auto max_num = max_element(nums.begin(), nums.end());
    auto min_num = min_element(nums.begin(), nums.end());
    long long diff = (long long)(*max_num) - (long long)(*min_num);
    long long res = (long long)k*(diff);
    return res;
}
```

Time Complexity: O(n)  
Space Complexity: O(1)