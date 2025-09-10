// Problem Link: https://leetcode.com/problems/longest-common-prefix/description/

#include <iostream>

using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    string common = "";

    string first_string = strs[0];

    for (int j = 0; j < first_string.size(); ++j) {
        for (int i = 0; i < strs.size(); ++i) {
            if (first_string[j] != strs[i][j]) {
                return common;
            }
        }
        common += first_string[j];
    }

    return common;
}

int main() {
    vector<string> a = {"dog","racecar","car"};
    cout << longestCommonPrefix(a);
}