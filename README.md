# Collatz_Sequence_Calculator

These programs will calculate the starting number below a given limit that has the longest Collatz sequence.

Input is a simgle number, passable by the command line. The inserted number is the upper limit below which the longest chain should be found.

One program optimizes code for simplicity and low memory usage and the other aims for a reduction in prosessing power requred.

# Collatz sequence definition
The following iterative sequence is defined for the set of positive integers: 

n → n/2 (n is even)
n → 3n + 1 (n is odd)

Using the rule above and starting with 13, we generate the following sequence:
13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1

It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.
