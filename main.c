#include <stdio.h>
void dgemm(int n, double* A, double* B, double* C)
{
    for (int i = 0; i < n; i++) //This is the start of the outer loop that iterates over each row i of the matrices.
    {
        for (int j = 0; j < n; j++) //This is the start of the second loop that iterates over each column j of the matrices.
        {
            double cij = C[i+j*n]; //cij = C[i][j] This line initializes a variable cij with the value of the element at row i and column j in matrix C.
            for (int k = 0; k < n; k++) //This is the start of the innermost loop that iterates over each element k in row i of matrix A and column j of matrix B.
            {
                cij += A[i+k*n] * B[k+j*n]; // cij += A[i][k] * B[k][j] 
                //This line updates cij by adding the product of the element at row i and column k in matrix A and the element at row k and column j in matrix B.
            }
            C[i+j*n] = cij; //C[i][j] = cij This line stores the computed value of cij back into the element at row i and column j in matrix C.
        }
        
    }
   
    
}
int main()
{
    int n;
    printf("Provide the size (n) of the squared matrix A, B, C: ");
    scanf("%d",&n);
    double A[n*n];
    for (int i = 0; i < n*n; i++) {
        printf("Provide the desired value A[%d]: \n", i);
        scanf("%lf",&A[i]); // Example initialization, you can set the values as needed
    }
    printf("A:\n ");
    for (int i = 0; i < n*n; i++)
    {
        printf("A[%d] = %lf", i, A[i]);
        printf("\n");
    }
    double B[n*n];
    for (int i = 0; i < n*n; i++) {
        printf("Provide the desired value B[%d]: \n", i);
        scanf("%lf",&B[i]); // Example initialization, you can set the values as needed
    }
    printf("B:\n");
    for (int i = 0; i < n*n; i++)
    {
        printf("B[%d] = %lf", i, B[i]);
        printf("\n");
    }
    double C[n*n];
    for (int i = 0; i < n*n; i++) {
        C[i] = 0.0;
    }

    dgemm(n, A, B, C);

    printf("\n Result matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("A[%d,%d](%d) = %f \n", i, j, i+j*n, A[i+j*n]);
        }
        printf("\n");
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("B[%d,%d](%d) = %f \n", i, j,i+j*n, B[i+j*n]);
        }
        printf("\n");
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("C[%d,%d](%d) = %f \n", i, j, i+j*n, C[i+j*n]);
        }
        printf("\n");
    }

    return 0;
}
