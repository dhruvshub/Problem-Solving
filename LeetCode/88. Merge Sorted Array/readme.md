## 88. Merge Sorted Array

Problem Link: [LeetCode](https://leetcode.com/problems/merge-sorted-array/description/)

### Solution

The best way to solve this problem is to start merging from the very end of the arrays.
Since, `nums1` already has a size of `m+n`, we can easily merge the two arrays in-place.

If `nums1[i] > nums2[j]`, then we move `nums[i]` to the last index in `nums1` i.e. `k` and simultaneously decrease(done by `k--` and `i--`) `k` and `i`, and vice versa.

Finally, if there are some elements left in `nums2` after first loop has completed, then just copy them to `nums1` and the rest of the `mums1` array will be already in place.

```c++
int i = m-1;
int j = n-1;
int k = m+n-1;

while (i>=0 && j>=0) {
    if (nums1[i] > nums2[j]) {
        nums1[k--] = nums1[i--];
    }
    else {
        nums1[k--] = nums2[j--];
    }
}
while (j>=0) {
    nums1[k--] = nums2[j--];
}
```

Time Complexity: O(m+n)  
Space Complexity: O(1)