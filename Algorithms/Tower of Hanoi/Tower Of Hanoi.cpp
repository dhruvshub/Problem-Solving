#include <iostream>

using namespace std;

void tower_of_hanoi(int n, char source, char auxiliary, char destination) {
    if (n==1) {
        cout << "Move disk 1 from " << source << " to " << destination << endl;
    }
    else if (n>0) {
        tower_of_hanoi(n-1, source, destination, auxiliary);
        cout << "Move disk " << n << " from " << source << " to " << destination << endl;
        tower_of_hanoi(n-1, auxiliary, source, destination);
    }
}

int main() {
    tower_of_hanoi(5, 'A', 'B', 'C');
}