
//WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array

#include <stdio.h>
main() 
{
    int matrix1[2][2];
    int matrix2[2][2];
    int Add[2][2];
    int Sub[2][2];
    int Mul[2][2];

    
    printf("Enter elements of matrix 1:\n");
    for (int i=0;i<2;i++) 
	{
        for (int j=0;j<2;j++) 
		{
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Enter elements of matrix 2:\n");
    for (int i=0;i<2;i++) 
	{
        for (int j=0;j<2;j++) 
		{
            scanf("%d", &matrix2[i][j]);
        }
    }
    for (int i=0;i<2;i++) 
	{
        for (int j=0;j<2;j++) 
		{
            Add[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    for (int i=0;i<2;i++) 
	{
        for (int j=0;j<2;j++) 
		{
            Sub[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
	for (int i=0;i<2;i++) 
	{
        for (int j=0;j<2;j++) 
		{
            Mul[i][j] = 0;
            for (int k=0;k<2;k++) 
			{
                Mul[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    printf("Matrix 1:\n");
    for (int i=0;i<2;i++) 
	{
        for (int j=0;j<2;j++) 
		{
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }

    printf("Matrix 2:\n");
    for (int i=0;i<2;i++) 
	{
        for (int j=0;j<2;j++) 
		{
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }

    printf("Addition:\n");
    for (int i=0;i<2;i++) 
	{
        for (int j=0;j<2;j++) 
		{
            printf("%d ", Add[i][j]);
        }
        printf("\n");
    }

    printf("Subtraction:\n");
    for (int i=0;i<2;i++) 
	{
        for (int j=0;j<2;j++) 
		{
            printf("%d ", Sub[i][j]);
        }
        printf("\n");
    }

    printf("Multiplication:\n");
    for (int i=0;i<2;i++) 
	{
        for (int j=0;j<2;j++) 
		{
            printf("%d ", Mul[i][j]);
        }
        printf("\n");
    }
}
