// Problem Link: https://projecteuler.net/problem=17

#include <iostream>

using namespace  std;

string letters[] = {
    "",
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
};

string tens[] = {
    "",
    "ten",
    "twenty",
    "thirty",
    "forty",
    "fifty",
    "sixty",
    "seventy",
    "eighty",
    "ninety",
};

string hundred = "hundred";
string thousand = "thousand";
string joiner = "and";

size_t count_letters(int n) {
    size_t num_of_letters = 0;
    if (n == 1000) {
        num_of_letters+=letters[1].length() + thousand.length();
    }
    else {
        int units_digit = n % 10;
        int tens_digit =(n % 100) / 10;
        int hundreds_digit = n / 100;
        int remainder = n % 100;

        if (remainder == 0 && n>=100) {
            num_of_letters+=letters[hundreds_digit].length() + hundred.length();
        }
        else if (n>100) {
            if (remainder < 20) {
                num_of_letters+=letters[hundreds_digit].length() + hundred.length() + joiner.length() + letters[remainder].length();
            }
            else {
                num_of_letters+=letters[hundreds_digit].length() + hundred.length() + joiner.length() + tens[tens_digit].length() + letters[units_digit].length();
            }
        }
        else {
            if (remainder < 20) {
                num_of_letters+=letters[remainder].length();
            }
            else {
                num_of_letters+=tens[tens_digit].length() + letters[units_digit].length();
            }
        }
    }
    return num_of_letters;
}


int main() {
    int num_letters = 0;
    for (int i = 1; i <= 1000; ++i) {
        num_letters+=static_cast<int>(count_letters(i));
    }
    cout << "Number of letters = " << num_letters;
}



