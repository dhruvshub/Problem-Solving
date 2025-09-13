#include <iostream>

using namespace std;

int tower_of_hanoi(int n, char source, char auxiliary, char destination) {
    static int moves = 0;
    if (n==1) {
        cout << "Move disk 1 from " << source << " to " << destination << endl;
        moves+=1;
    }
    else if (n>0) {
        tower_of_hanoi(n-1, source, destination, auxiliary);
        cout << "Move disk " << n << " from " << source << " to " << destination << endl;
        moves+=1;
        tower_of_hanoi(n-1, auxiliary, source, destination);
    }
    return moves;
}

int main() {
    int num_moves = tower_of_hanoi(3, 'A', 'B', 'C');
    cout << endl << "Number of moves made: " << num_moves << endl;
}