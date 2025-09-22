## 242. Valid Anagram

Problem Link: [LeetCode](https://leetcode.com/problems/valid-anagram/description/)

### Brute Force

This is pretty straightforward, simply sort the strings and check if they are equal or not.
```c++
bool isAnagram(string s, string t) {
    if (s.length() != t.length()) {
        return false;
    }
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    return (s==t);
}
```

Time Complexity: O($n.\log n+m.\log m$)  
Space Complexity: O(1)

### Better Approach

This uses hashmaps for both the string, stores the frequency of each character and atlast compares the two.

```c++
bool isAnagram(string s, string t) {
    if (s.length() != t.length()) {
        return false;
    }
    unordered_map<char, int> string1;
    unordered_map<char, int> string2;
    for (int i=0; i<s.length();++i) {
        string1[s[i]]++;
        string2[t[i]]++;
    }
    return (string1==string2);
}
```

Time Complexity: O($m+n$)  
Space Complexity: O(1)