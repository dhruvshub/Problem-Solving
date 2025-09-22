## 268. Missing Number

Problem Link: [LeetCode](https://leetcode.com/problems/missing-number/description/)

### Using formula

This was the first solution that came to my mind. Since, the array has numbers of range [0,n]. Then we can calculate the sum of n natural numbers using $\frac {n(n+1)}{2}$ and sum the numbers in the array and calculating the difference will give you the missing number.

```c++
int missingNumber(vector<int>& nums) {
    long long sum = (nums.size()*(nums.size()+1))/2;
    long long as = 0;
    for (int i:nums) {
        as+=i;
    }
    return sum-as;
}
```

Time Complexity: O(n)  
Space Complexity: O(1)

### Using BitWise XOR

This is a rather clever approach and I found it in the discussions. Here the property of XOR is utilized which is it cancels the same number.
`a^a = 0`. So, we take XOR of all numbers from `0` to `n` and XOR of all elements in nums. All the elements will be cancelled except the one which is missing in `nums`.

```c++
int missingNumber(vector<int>& nums) {
    int bitwise_xor = 0;
    for (int i = 0; i<nums.size(); ++i) {
        bitwise_xor^=nums[i];
    }
    return bitwise_xor;
}
```

Time Complexity: O(n)  
Space Complexity: O(1)