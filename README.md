# DGEMM C Program
Introduction

This README document provides an overview of the DGEMM (Double-precision General Matrix Multiply) C program. The program is designed to perform matrix multiplication on square matrices using the standard triple-nested loop approach. It is a basic implementation, primarily suited for educational purposes to demonstrate matrix multiplication in C.
Program Description

The program consists of two main parts: the dgemm function and the main function.
dgemm Function

    Purpose: Performs the multiplication of two square matrices.
    Parameters:
        int n: The size of the matrices.
        double* A: Pointer to the first matrix.
        double* B: Pointer to the second matrix.
        double* C: Pointer to the result matrix.
    Implementation: Uses three nested loops to iterate over the rows and columns of the matrices, computing the product.

main Function

    Functionality:
        Asks the user to input the size of the matrices.
        Dynamically allocates memory for matrices A, B, and C.
        Prompts the user to enter the elements of matrices A and B.
        Calls the dgemm function to multiply the matrices.
        Displays the input matrices and the result matrix.

Compilation and Execution

To compile and run the program, follow these steps:

    Save the code in a file, for example, dgemm.c.
    Open a terminal and navigate to the directory containing dgemm.c.
    Compile the program using a C compiler, e.g., gcc -o dgemm dgemm.c.
    Run the executable: ./dgemm.

System Requirements

    A C compiler (like GCC).
    Standard C libraries.

Notes

    The program is designed for educational purposes and may not be efficient for large matrices.
    Error handling (e.g., for invalid inputs) is not implemented.
    The program uses dynamic memory allocation for matrices, which is a simple but not the most efficient approach.

Conclusion

This DGEMM program is a straightforward implementation of matrix multiplication in C, suitable for educational and demonstration purposes. It allows users to input their own matrices and see the results of the multiplication operation.
