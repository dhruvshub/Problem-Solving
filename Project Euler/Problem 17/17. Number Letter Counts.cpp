// Problem Link: https://projecteuler.net/problem=17

#include <iostream>

using namespace  std;

int main() {
    int num_letters = 0;
    string letters[] = {
        "zero", // Yes, this was unnecessary. I added because of OCD
        "one",
        "two",
        "three",
        "four",
        "five",
        "six",
        "seven",
        "eight",
        "nine",
        "ten",
        "eleven",
        "twelve",
        "thirteen",
        "fourteen",
        "fifteen",
        "sixteen",
        "seventeen",
        "eighteen",
        "nineteen",
        "twenty",
        "thirty", // 21
        "forty", // 22
        "fifty", // 23
        "sixty", // 24
        "seventy", //25
        "eighty", // 26
        "ninety", // 27
        "hundred", // 28
        "thousand", // 29
        "and" // 30
    };
    for (int i = 1; i<=1000; ++i) {
        if (i == 1000) {
            num_letters+=letters[29].length();
        }
        if (i > 100) {
            if (i == 200 || i == 300 || i == 400 || i == 500 || i == 600 || i == 700 || i == 800 || i == 900) {
                int hd = i / 100;
                num_letters+=letters[hd].length() + letters[28].length();
            }
            int hd = i / 100;
            int temp = i % 100;

            if (temp<=20) {
            num_letters+= letters[hd].length() + letters[28].length() + letters[29].length() + letters[temp].length();
            }
            if (temp>=21 && temp <=30) {
                if (temp == 30) {
                    num_letters+=letters[hd].length() + letters[28].length() + letters[29].length() + letters[21].length();
                }
                else {
                    int ld = temp % 10;
                    num_letters+=letters[hd].length() + letters[28].length() + letters[29].length() + letters[20].length() + letters[ld].length();
                }
            }
            if (temp>=31 && temp <=40) {
                if (temp == 40) {
                    num_letters+=letters[hd].length() + letters[28].length() + letters[29].length() + letters[22].length();
                }
                else {
                    int ld = temp % 10;
                    num_letters+=letters[hd].length() + letters[28].length() + letters[29].length() + letters[21].length() + letters[ld].length();
                }
            }
            if (temp>=41 && temp <=50) {
                if (temp == 50) {
                    num_letters+=letters[hd].length() + letters[28].length() + letters[29].length() + letters[23].length();
                }
                else {
                    int ld = temp % 10;
                    num_letters+=letters[hd].length() + letters[28].length() + letters[29].length() + letters[22].length() + letters[ld].length();
                }
            }
            if (temp>=51 && temp <=60) {
                if (temp == 60) {
                    num_letters+=letters[hd].length() + letters[28].length() + letters[29].length() + letters[24].length();
                }
                else {
                    int ld = temp % 10;
                    num_letters+=letters[hd].length() + letters[28].length() + letters[29].length() + letters[23].length() + letters[ld].length();
                }
            }
            if (temp>=61 && temp <=70) {
                if (temp == 70) {
                    num_letters+=letters[hd].length() + letters[28].length() + letters[29].length() + letters[25].length();
                }
                else {
                    int ld = temp % 10;
                    num_letters+=letters[hd].length() + letters[28].length() + letters[29].length() + letters[24].length() + letters[ld].length();
                }
            }
            if (temp>=71 && temp <=80) {
                if (temp == 80) {
                    num_letters+=letters[hd].length() + letters[28].length() + letters[29].length() + letters[26].length();
                }
                else {
                    int ld = temp % 10;
                    num_letters+=letters[hd].length() + letters[28].length() + letters[29].length() + letters[25].length() + letters[ld].length();
                }
            }
            if (temp>=81 && temp <=90) {
                if (temp == 90) {
                    num_letters+=letters[hd].length() + letters[28].length() + letters[29].length() + letters[27].length();
                }
                else {
                    int ld = temp % 10;
                    num_letters+=letters[hd].length() + letters[28].length() + letters[29].length() + letters[26].length() + letters[ld].length();
                }
            }
            if (temp>=91 && temp <=99) {
                int ld = temp % 10;
                num_letters+=letters[hd].length() + letters[28].length() + letters[29].length() + letters[27].length() + letters[ld].length();
        }
        }
        if (i<=20) {
            num_letters+= letters[i].length();
        }
        if (i>=21 && i <=30) {
            if (i == 30) {
                num_letters+=letters[21].length();
            }
            else {
                int ld = i % 10;
                num_letters+=letters[20].length() + letters[ld].length();
            }
        }
        if (i>=31 && i <=40) {
            if (i == 40) {
                num_letters+=letters[22].length();
            }
            else {
                int ld = i % 10;
                num_letters+=letters[21].length() + letters[ld].length();
            }
        }
        if (i>=41 && i <=50) {
            if (i == 50) {
                num_letters+=letters[23].length();
            }
            else {
                int ld = i % 10;
                num_letters+=letters[22].length() + letters[ld].length();
            }
        }
        if (i>=51 && i <=60) {
            if (i == 60) {
                num_letters+=letters[24].length();
            }
            else {
                int ld = i % 10;
                num_letters+=letters[23].length() + letters[ld].length();
            }
        }
        if (i>=61 && i <=70) {
            if (i == 70) {
                num_letters+=letters[25].length();
            }
            else {
                int ld = i % 10;
                num_letters+=letters[24].length() + letters[ld].length();
            }
        }
        if (i>=71 && i <=80) {
            if (i == 80) {
                num_letters+=letters[26].length();
            }
            else {
                int ld = i % 10;
                num_letters+=letters[25].length() + letters[ld].length();
            }
        }
        if (i>=81 && i <=90) {
            if (i == 90) {
                num_letters+=letters[27].length();
            }
            else {
                int ld = i % 10;
                num_letters+=letters[26].length() + letters[ld].length();
            }
        }
        if (i>=91 && i <=100) {
            if (i == 100) {
                num_letters+=letters[28].length();
            }
            else {
                int ld = i % 10;
                num_letters+=letters[27].length() + letters[ld].length();
            }
        }
    }
    cout << "Number of letters = " << num_letters;
}

