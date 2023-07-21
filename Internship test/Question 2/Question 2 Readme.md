Fibonacci Sequence with Dynamic Programming in C

Development Environment:
------------------------

The source code provided in this repository is written in C programming language. To compile and run the code, you will need a C compiler such as GCC (GNU Compiler Collection) installed on your system.

To check if GCC is installed on your system, open a terminal or command prompt and run the following command:
gcc --version

If GCC is not installed, you can download and install it from the official website:
https://gcc.gnu.org/

The following development environment was used to create and test the Fibonacci sequence program:

1. Operating System: macOS Ventura 13.4.1 (a)
2. IDE: Visual Studio Code  Version: 1.80.1
3. Compiler: GCC

Compile and Run the Source Code:
--------------------------------

Follow these steps to compile and run the source code:

1. Open a terminal or command prompt.
2. Navigate to the directory containing the source code file (e.g., fibonacci.c).
3. Compile the code using GCC. To do this, run the following command:
   gcc -o recursive_approach recursive_approach.c

   This will generate an executable file named 'fibonacci' in the same directory.
4. Now, to run the program, execute the following command:
   ./fibonacci

   The program will prompt you to enter the value of 'n' for which you want to find the Fibonacci number.

Differences between the Three Approaches (Advantages and Disadvantages):
------------------------------------------------------------------------

1. Recursive Approach:

   - Advantages:
     - Simple to implement, and the code looks straightforward.
     - Easy to understand and reason about the algorithm.
   - Disadvantages:
     - Inefficient for larger values of n due to repetitive function calls, leading to exponential time complexity.
     - Recalculates the same values multiple times, resulting in redundant computations.
2. Dynamic Programming (Bottom-up) Approach:

   - Advantages:
     - Efficient and faster than the recursive approach.
     - Avoids redundant calculations by storing previously computed values in an array.
   - Disadvantages:
     - Requires additional memory to store the dynamic programming table, which could be a concern for extremely large values of n.
     - The space complexity is O(n) due to the array used to store intermediate results.
3. Memoization (Top-down) Approach:

   - Advantages:
     - Efficient like the dynamic programming approach but can save memory by only calculating the required values and caching them in the memo array.
     - Avoids redundant calculations and reduces the time complexity for larger values of n.
   - Disadvantages:
     - Still involves function calls and might lead to stack overflow for very large values of n.
     - The space complexity is also O(n) due to the memo array, which could be a limitation for very large values of n.

In summary, the recursive approach is simple but inefficient for large values of n. The dynamic programming and memoization approaches are more efficient, with dynamic programming having a slightly higher memory requirement. The memoization approach can save memory by only calculating what's needed and is often preferred due to its better time complexity and ability to handle larger values of n.
