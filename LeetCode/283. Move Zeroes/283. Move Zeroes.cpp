// Problem Link: https://leetcode.com/problems/move-zeroes/description/

#include <iostream>

using namespace std;

void moveZeroes(vector<int>& nums) {
    int j = 0;
    for (int i = 0; i<nums.size(); ++i) {
        if (nums[i] != 0) {
            if (i!=j) {
                swap(nums[i], nums[j]);
            }
            j++;
        }
    }
}
void display(vector<int>& a) {
    for (int i:a) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    vector<int> a = {0,1,0,3,12};
    vector<int> b = {0,1};
    vector<int> c = {0, 0, 0};

    moveZeroes(a);
    moveZeroes(b);
    moveZeroes(c);


    display(a);
    display(b);
    display(c);
}