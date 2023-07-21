Fibonacci Sequence Implementation in C

Folder Structure:
-----------------

The repository contains two folders, each representing a different question:

1. Question 1:

   - Contains the C code for a function that returns the nth Fibonacci number based on arithmetic operations (+, -, *, /) and conditions.
   - File: question1.c
   - Additional information and instructions can be found in the "Question 1 Readme.md" file.
2. Question 2:

   - Implements the given piecewise recurrence relation F(n) = F(n-3) + F(n-2) in three different ways: Recursive, Dynamic Programming, and Memoization approaches.
   - Files: recursive_approach.c, dynamic_programming_approach.c, memoization_approach.c
   - Additional information and instructions can be found in the "Question 2 Readme.md" file.

Cloning the Project from GitHub:
--------------------------------

To clone the project and get a local copy on your system, follow these steps:

1. Open a terminal or command prompt.
2. Change the current working directory to the location where you want to clone the project.
3. Run the following command to clone the repository:
   git clone https://github.com/your_username/internship-test.git

   Replace 'your_username' with your GitHub username.
4. Once the cloning process is complete, you will have a local copy of the project on your system.

Compiling and Running the Code:
-------------------------------

Each folder contains separate C files for different approaches. To compile and run the code, navigate to the corresponding folder and follow these steps:

1. Open a terminal or command prompt.
2. Change the current working directory to the folder containing the specific approach's C file (e.g., "Question 2" folder).
3. Compile the code using GCC. To do this, run the following command:
   gcc -o fibonacci fibonacci.c

   This will generate an executable file named 'fibonacci' (or 'fibonacci.exe' on Windows) in the same directory.
4. Now, to run the program, execute the following command:
   ./fibonacci

   The program will prompt you to enter the value of 'n' for which you want to find the Fibonacci number.

Feel free to explore each approach's README files for additional information and explanations about the code and its differences.

Developed by Ifeanyichukwu Obeta
Bitnine Global Inc.
