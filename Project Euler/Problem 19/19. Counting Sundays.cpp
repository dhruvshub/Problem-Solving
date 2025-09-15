// Problem Link: https://projecteuler.net/problem=19

#include <iostream>

using namespace  std;
unordered_map<int, int> mon = {
    {1, 11},
    {2, 12},
    {3, 1},
    {4,2},
    {5, 3},
    {6, 4},
    {7, 5},
    {8, 6},
    {9, 7},
    {10, 8},
    {11, 9},
    {12, 10}
};

unordered_map<int, string> days = {
    {0, "Sunday"},
    {1, "Monday"},
    {2, "Tuesday"},
    {3, "Wednesday"},
    {4, "Thursday"},
    {5, "Friday"},
    {6, "Saturday"}
};

string day_of_week(int d, int m, int y) {
    int k = d;
    m = mon[m];
    int D = y % 100;
    int C = y/100;
    if (m == 11 || m == 12) {
        D -= 1;
        if (y%1000 == 0) {
            C-=1;
        }
    }
    int f = k + ((13*m - 1)/5) + D + (D/4) + (C/4) - 2*C;
    int r = f%7;
    if (r<0) {
        return days[r+7];
    }
    return days[r];
}

int count_sundays(int start, int end) {
    int num_sundays = 0;

    for (int i = start; i<=end; ++i) {
        for (int j = 1; j<13; ++j) {
            if (day_of_week(1, j, i) == "Sunday") {
                num_sundays+=1;
            }
        }
    }

    return num_sundays;
}

int main() {
    cout << count_sundays(1901, 2000);
    cout << day_of_week(1, 12, 2000);
}