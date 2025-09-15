// Problem Link: https://leetcode.com/problems/day-of-the-week/description/
#include <iostream>

using namespace std;

string day_of_week(int day, int month, int year) {
    static const vector<string> days = {
        "Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"
    };

    int k = day;
    int m = month - 2;
    int D = year % 100;
    int C = year / 100;
    if(month == 1 || month == 2){
        m = month + 10;
        year-=1;
        D = year % 100;
        C = year / 100;
        if (year%1000 == 0) {
            C-=1;
        }
    }

    int f = k + ((13*m - 1)/5) + D + (D/4) + (C/4) + 5*C;

    return days[f%7];
}

int main() {
    cout << day_of_week(29, 2, 2000);
}