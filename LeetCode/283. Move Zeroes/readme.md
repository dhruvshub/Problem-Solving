## 283. Move Zeroes

Problem Link: [LeetCode](https://leetcode.com/problems/move-zeroes/description/)

This problem was easy-hard level for me. I took way too much time and also used the help of hints to get to the solution.
Here are the two solutions I came up with:

### Naive Solution

Here, I am using two pointers one to iterate the array and find zeroes and one to find the first non-zero element when a zero is found.
This causes `j` to repeatedly look for the zeroes, which is inefficient.

```c++
void moveZeroes(vector<int>& nums) {
        if(nums.size() == 1){
            return;
        }
        int i = 0;
        while(i<nums.size()){
            if(nums[i] == 0){
                int j = i + 1;
                while(j<nums.size() && nums[j] == 0){
                    j++;
                }
                if(j==nums.size()){
                    break;
                }
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
            i++;
        }
    }
```
Time Complexity: O(n<sup>2</sup>)  
Space Complexity: O(1)

### Optimal Solution

In this approach as well, I am using two pointers, but smartly. `j` tracks the zero elements and `i` looks for non zero elements and swap when one is found.

```c++
void moveZeroes(vector<int>& nums) {
    int j = 0;
    for (int i = 0; i<nums.size(); ++i) {
        if (nums[i] != 0) {
            if (i!=j) {
                swap(nums[i], nums[j]); // Could've done manual swap as well.
            }
            j++;
        }
    }
}
```

Time Complexity: O(n)  
Space Complexity: O(1)