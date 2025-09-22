// Problem Link: https://leetcode.com/problems/count-elements-with-maximum-frequency/description/

#include <iostream>
#include <vector>

using namespace std;

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

int main() {
    vector<int> a = {42,29,100,55,70,28,63,78,4,73,32,2,98,22,78,64,43,28,90,42,100,56,85,32,39,54,33,27,7,68,4,77,81,71,49,39,76,95,37,7,2};
    cout << maxFrequencyElements(a);
}