// Problem Link: https://leetcode.com/problems/insert-interval/

#include <iostream>

using namespace std;

vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {

    vector<vector<int>> res;
    for(int i = 0; i < intervals.size(); ++i) {
        if (newInterval[1] < intervals[i][0]) {
            res.push_back(newInterval);
            for (; i < intervals.size(); ++i) {
                res.push_back(intervals[i]);
            }
            return res;
        }
        else if (intervals[i][1] < newInterval[0]) {
            res.push_back(intervals[i]);
        }
        else {
            newInterval[0] = min(newInterval[0],intervals[i][0]);
            newInterval[1] = max(newInterval[1],intervals[i][1]);
        }
    }
    res.push_back(newInterval);
    return res;
}

int main() {
    vector<vector<int>> a = {{1, 2}, {3, 5}, {6, 7}, {8, 10}, {12, 16}};
    vector<int> b = {15, 23};
    vector<vector<int>> res = insert(a, b);

    for (int i = 0; i < res.size(); ++i) {
        cout << res[i][0] << ", " << res[i][1] << endl;
    }
}