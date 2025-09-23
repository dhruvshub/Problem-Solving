// Problem Link: https://leetcode.com/problems/compare-version-numbers/description/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> split_string(string& s, char delimiter) {
    vector<int> final_string = {};
    string sub = "";
    for (int i = 0; i<s.length();++i) {
        if (s[i] == delimiter) {
            final_string.push_back(stoi(sub));
            sub = "";
        }
        else {
            sub += s[i];
        }
    }
    if (!sub.empty()) {
        final_string.push_back(stoi(sub));
    }
    return final_string;
}

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

int main() {
    string a = "1.0.1";
    string b = "1";

    // vector<int> res = split_string(b, '.');
    // for (int i:res) {
    //     cout << i << " ";
    // }
    cout << compareVersion(a, b);
}