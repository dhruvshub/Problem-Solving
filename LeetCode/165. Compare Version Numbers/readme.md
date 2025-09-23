## 165. Compare Version Numbers

Problem Link: [LeetCode](https://leetcode.com/problems/compare-version-numbers/description/)

This solution might not be the most optimized one, but it gets the job done.

First, I split the string based on the delimiter `'.'` to get the version numbers and the revisions, and store it into a vector. Now, just how we compare in the problem "Merge two Sorted Arrays", compare the two vectors the same way and return the corresponding values.

```c++
int compareVersion(string version1, string version2) {
    vector<int> version_1 = split_string(version1, '.');
    vector<int> version_2 = split_string(version2, '.');

    int n = min(version_1.size(), version_2.size());
    int i = 0;
    for (; i<n;++i) {
        if (version_1[i] > version_2[i]) {
            return 1;
        }
        if (version_1[i] < version_2[i]) {
            return -1;
        }
    }

    while (i<version_1.size()) {
        if (version_1[i++] !=0 ) {
            return 1;
        }
    }

    while (i<version_2.size()) {
        if (version_2[i++] != 0) {
            return -1;
        }
    }
    return 0;
}
```

Time Complexity: O(max(m, n))  
Space Complexity: O(m+n)