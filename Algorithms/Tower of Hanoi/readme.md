# Tower of Hanoi Problem

<hr>

I have solved it using recursion.

My main approach is to first transfer `n-1` discs from tower/peg 1
to tower 2. After doing this tower 1 has only the largest disc left, move it to the third tower, and then
 again move `n-1` discs from tower 2 to tower 3.

This transferring of `n-1` discs is not necessarily done in a single step. Smaller steps may be required to complete the bigger
 step.

Total number of moves required = 2<sup>n</sup>-1


Time Complexity: O(2<sup>n</sup>) <br>
Space Complexity: O(n)