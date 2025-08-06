// Problem Link: https://projecteuler.net/problem=14

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    int start = 999999;
    unordered_map<long, int> start_and_length;
    int max_value = 0;
    int max_start = 0;
    long current;
    while (start!=1) {
        current = start;
        vector<long> sequence = {current};
        while (sequence.back() != 1) {
            if (current % 2 == 0) {
                current = current / 2;
                sequence.push_back(current);
            }
            else {
                current = (3*current)+1;
                sequence.push_back(current);
            }
        }
        int length = static_cast<int>(sequence.size());
        start_and_length.insert({start, length});
        start--;
    }
    for (auto i = start_and_length.begin(); i != start_and_length.end(); ++i) {
        if (i->second > max_value) {
            max_value = i->second;
            max_start = i->first;
        }
    }
    cout << "Max length is " << max_value << " using the start " << max_start;
}