## 189. Rotate Array

Problem Link: [LeetCode](https://leetcode.com/problems/rotate-array/description/)

### Naive Solution

The first and the most basic solution is to just run a loop and do right shifts. This does not work for longer array.

```c++
k = k % nums.size();
while (k!=0) {
    int temp = nums[nums.size()-1];
    for (int i = nums.size()-1; i >=0; --i) {
        nums[i+1] = nums[i];
    }
    nums[0] = temp;
    k--;
}
```
Time Complexity = O(n*k)  
Space Complexity = O(1)
### Better Solution

A better approach would be to use a second array/vector in which we can store the elements which are to be shifted right, and move the rest of the elements and just add back the temporary vector to nums.

### Best Solution

The best solution would be by reversing. First reverse the whole array, then reverse the first `k` elements and then reverse the last `n-k` elements.

```c++
k = k % nums.size();
reverse(nums.begin(), nums.end());
reverse(nums.begin(), nums.begin()+k);
reverse(nums.begin()+k, nums.end());
```

Time Complexity = O(n)  
Space Complexity = O(1)