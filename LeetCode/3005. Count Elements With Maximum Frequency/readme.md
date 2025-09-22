## 3005. Count Elements With Maximum Frequency

Problem Link: [LeetCode](https://leetcode.com/problems/count-elements-with-maximum-frequency/description/)

### Brute Force

This is a pretty easy problem, just store the frequency of elements, find the maximum frequency, then count the number of elements with maximum frequency and return the total frequency.
```c++
int maxFrequencyElements(vector<int>& nums) {
    vector<int> frequency(101,0);
    for(int i:nums){
        frequency[i]+=1;
    }
    auto max_freq = max_element(frequency.begin(), frequency.end());
    int count = 0;
    for(int i = 1; i<101; ++i){
        if(frequency[i] == *max_freq){
            count+=*max_freq;
        }
    }
    return count;
}
```

Time Complexity: O(n)  
Space Complexity: O(1)


### One-Pass Solution

The main idea is same as above one, but it is all done in one single pass i.e. in one iteration.

But this led me to an interesting observation, asymptotically they both are same, but the second approach may seem faster because it's done in a single loop, no iterating the array/vector multiple times(like in the above solution). But in reality, when the program is run, then the brute force solution actually runs faster because the functions like `max_element` are heavily optimized. Secondly, the one-pass solution has a complex condition-check inside the loop which it has to do everytime, so it can take a little longer than the first one.

```c++
int maxFrequencyElements(vector<int>& nums) {
    vector<int> frequency(101,0);
    int count = 0;
    int max_frequency = 0;
    for(int i:nums){
        frequency[i]+=1;
        if(frequency[i] > max_frequency){
            max_frequency = frequency[i];
            count = 0;
        }
        if(frequency[i] == max_frequency){
            count+=max_frequency;
        }
    }
    return count;
}
```

Time Complexity: O(n)  
Space Complexity: O(1)