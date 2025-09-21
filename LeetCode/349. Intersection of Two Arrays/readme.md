## 349. Intersection of Two Arrays

Problem Link: [LeetCode](https://leetcode.com/problems/intersection-of-two-arrays/description/)

### First Solution

This is the first solution that I came up with, since both the vectors are unsorted, what I did was check the smallest vector in size, and search each element of the smaller vector in the bigger vector and add it to the intersection vector only if it has not been added previously.


```c++
vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    vector<int> intersection = {};
    if(nums1.size() > nums2.size()){
        for(int i:nums2){
            if(search(nums1, i) != -1){
                if(search(intersection, i) == -1){
                    intersection.push_back(i);
                }
            }
        }
    }
    else{
        for(int i: nums1){
            if(search(nums2, i) != -1){
                if(search(intersection, i) == -1){
                    intersection.push_back(i);
                }
            }
        }
    }
    return intersection;
}
```
The search funtion that I used:
```c++
int search(vector<int>& arr, int target){
    for(int i=0; i<arr.size();++i){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
```

Time Complexity: O(m*n)  
Space Complexity: O(n)

### A slightly better solution

This approach utilizes two pointers but also requires the two arrays/vectors to be sorted. So, firstly, I sort them, then initalize two pointers `i` and `j`. If `nums1[i] == nums2[j]` then that element is added to the set `res` (to avoid duplicates) and at last this set is converted to a vector and returned.

```c++
vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    set<int> res = {};
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());
    int i = 0;
    int j = 0;

    while (i<nums1.size() && j<nums2.size()) {
        if (nums1[i] == nums2[j]) {
            res.insert(nums1[i]);
            i++;
            j++;
        }
        else if (nums1[i] < nums2[j]) {
            i++;
        }
        else {
            j++;
        }
    }
    vector<int> intersection = {res.begin(), res.end()};

    return intersection;
}
```
Time Complexity: O(nlog(n)+mlog(m))  
Space Complexity: O(min(m,n))

### The Best Solution

I did not come up with this solution, I saw this in the editorial. It's the most efficient solution of all the approaches and utilizes unordered sets.

```c++
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

```

Time Complexity: O(m+n)  
Space Complexity: O(min(m,n))