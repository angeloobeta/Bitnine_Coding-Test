
Fibonacci Sequence with Dynamic Programming in C

Development Environment:
------------------------

The following development environment was used to create and test the Fibonacci sequence program:

1. Operating System: macOS Ventura 13.4.1 (a)
2. IDE: Visual Studio Code  Version: 1.80.1
3. Compiler: GCC (GNU Compiler Collection)

How to Compile and Run the Source Code:
---------------------------------------

Please follow the steps below to compile and run the Fibonacci sequence program in C using Visual Studio Code on macOS Ventura:

1. Open Visual Studio Code.
2. Create a new C source file and paste the Fibonacci sequence code into it.
3. Save the file with a ".c" extension, e.g., "fibonacci.c".
4. Open a terminal within Visual Studio Code:

   - Press "Ctrl + ` " (backtick) to open the integrated terminal.
5. Navigate to the directory where you have saved the "fibonacci.c" file using the 'cd' command.
6. Compile the source code using GCC:
   $ gcc -o fibonacci fibonacci.c

   This command will create an executable file named "fibonacci" in the same directory.
7. Run the executable:
   $ ./fibonacci
8. The program will prompt you to enter the value of 'n' to get the nth Fibonacci number.
9. Enter a positive integer 'n' and press Enter.
10. The program will calculate and display the nth Fibonacci number using dynamic programming
    and the specified arithmetic operations (+, -, *, /).
11. You can repeat steps 9-10 to find other Fibonacci numbers as well.

Example Usage:
--------------

$ gcc -o fibonacci fibonacci.c
$ ./fibonacci
Enter the value of n to get the nth Fibonacci number: 10
The 10th Fibonacci number is: 55

$ ./fibonacci
Enter the value of n to get the nth Fibonacci number: 5
The 5th Fibonacci number is: 5

$ ./fibonacci
Enter the value of n to get the nth Fibonacci number: 0
The 0th Fibonacci number is: 0

$ ./fibonacci
Enter the value of n to get the nth Fibonacci number: 1
The 1st Fibonacci number is: 1

Notes:
------

1. The program uses dynamic programming to efficiently calculate Fibonacci numbers.
2. The arithmetic operations (+, -, *, /) are used in the given Node structure but not directly
   used in the Fibonacci calculation.
3. The program takes care of freeing dynamically allocated memory after the computation.

Feel free to contact angeloobeta@hotmail.com for any questions or issues related to this code.
