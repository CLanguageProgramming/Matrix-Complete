#include <stdio.h>
int main()
{
    int a[100][100];
    int b[100][100];
    int c[100][100];
    int i;
    int j;
    int row;
    int row1;
    int col;
    int col1;
    int x;
    int sum=0;
    int k;
    printf("Enter 1 for matrix.\n");
    printf("Enter 2 for transposal of matrix.\n");
    printf("Enter 3 for addition of matrix.\n");
    printf("Enter 4 for subtraction of matrix.\n");
    printf("Enter 5 for multiplication of matrix.\n");
    printf("Enter a number ->>");
    scanf("%d", &x);
    printf("You have entered %d\n", x);
    switch(x)
    {
        case 1://if user enters 1
                printf("Enter the number of rows >>");
                scanf("%d", &row);
                printf("Enter the number of columns >>");
                scanf("%d", &col);
                for(i=0;i<=row- 1;i++)
                {
                    for(j=0;j<=col- 1;j++)
                    {
                        printf("Enter a%d%d >>", i+ 1, j+ 1);
                        scanf("%d", &a[i][j]);
                    }
                }
                printf("Matrix ->>\n");
                for(i=0;i<=row- 1;i++)
                {
                    for(j=0;j<=col- 1;j++)
                    {
                        printf("%d ", a[i][j]);
                        if(j == col- 1)
                        {
                            printf("\n");
                        }
                    }
                }
                break;
        
        case 2://if user enters 2
                printf("Enter he number of rows >>");
                scanf("%d", &row);
                printf("Enter the number of columns >>");
                scanf("%d", &col);
                for(i=0;i<=row- 1;i++)
                {
                    for(j=0;j<=col- 1;j++)
                    {
                        printf("Enter a%d%d >>", i+ 1, j+ 1);
                        scanf("%d", &a[i][j]);
                    }
                }
                printf("Matrix ->>\n");
                for(i=0;i<=row- 1;i++)
                {
                    for(j=0;j<=col- 1;j++)
                    {
                        printf("%d ", a[i][j]);
                        if(j == col- 1)
                        {
                            printf("\n");
                        }
                    }
                }
                for(i=0; i<=row- 1;i++)
                {
                    for(j=0;j<=col- 1;j++)
                    {
                        b[j][i] = a[i][j];
                    }
                }
                printf("Matrix Transposed ->>\n");
                for(i=0;i<=col- 1;i++)
                {
                    for(j=0;j<=row- 1;j++)
                    {
                        printf("%d ", b[i][j]);
                        if(j == row- 1)
                        {
                            printf("\n");
                        }
                    }
                }
                break;
                
        case 3://if user enters 3
                printf("Enter the number of rows >>");
                scanf("%d", &row);
                printf("Enter the number of columns >>");
                scanf("%d", &col);
                for(i=0;i<=row- 1;i++)
                {
                    for(j=0;j<=col- 1;j++)
                    {
                        printf("Enter a%d%d >>", i+ 1, j+ 1);
                        scanf("%d", &a[i][j]);
                    }
                }
                printf("Matrix ->>\n");
                for(i=0;i<=row- 1;i++)
                {
                    for(j=0;j<=col- 1;j++)
                    {
                        printf("%d ", a[i][j]);
                        if(j == col- 1)
                        {
                            printf("\n");
                        }
                    }
                }
                for(i=0;i<=row- 1;i++)
                {
                    for(j=0;j<=col- 1;j++)
                    {
                        printf("Enter b%d%d >>", i+ 1, j+ 1);
                        scanf("%d", &b[i][j]);
                    }
                }
                printf("Matrix ->>\n");
                for(i=0;i<=row- 1;i++)
                {
                    for(j=0;j<=col- 1;j++)
                    {
                        printf("%d ", b[i][j]);
                        if(j == col- 1)
                        {
                            printf("\n");
                        }
                    }
                }
                for(i=0;i<=row- 1;i++)
                {
                    for(j=0;j<=col- 1;j++)
                    {
                        c[i][j] = a[i][j]+b[i][j];
                    }
                }
                printf(" Sum of the Matrix entered ->>\n");
                for(i=0;i<=row- 1;i++)
                {
                    for(j=0;j<=col- 1;j++)
                    {
                        printf("%d ", c[i][j]);
                        if(j == col- 1)
                        {
                            printf("\n");
                        }
                    }
                }
                break;
                
        case 4://if user enters 4
                printf("Enter number of rows >>");
                scanf("%d", &row);
                printf("Enter number of columns >>");
                scanf("%d", &col);
                for(i=0;i<=row- 1;i++)
                {
                    for(j=0;j<=col- 1;j++)
                    {
                        printf("Enter a%d%d >>", i+ 1, j+ 1);
                        scanf("%d", &a[i][j]);
                    }
                }
                printf("Matrix ->>\n");
                for(i=0;i<=row- 1;i++)
                {
                    for(j=0;j<=col- 1;j++)
                    {
                        printf("%d ", a[i][j]);
                        if(j == col- 1)
                        {
                            printf("\n");
                        }
                    }
                }
                for(i=0;i<=row- 1;i++)
                {
                    for(j=0;j<=col- 1;j++)
                    {
                        printf("Enter b%d%d >>", i+ 1, j+ 1);
                        scanf("%d", &b[i][j]);
                    }
                }
                printf("Matrix ->>\n");
                for(i=0;i<=row- 1;i++)
                {
                    for(j=0;j<=col- 1;j++)
                    {
                        printf("%d ", b[i][j]);
                        if(j == col- 1)
                        {
                            printf("\n");
                        }
                    }
                }
                for(i=0;i<=row- 1;i++)
                {
                    for(j=0;j<= col- 1;j++)
                    {
                        c[i][j] = a[i][j]-b[i][j];
                    }
                }
                printf("Remaining of the Matrix ->>\n");
                for(i=0;i<=row- 1;i++)
                {
                    for(j=0;j<=col- 1;j++)
                    {
                        printf("%d ", c[i][j]);
                        if(j == col- 1)
                        {
                            printf("\n");
                        }
                    }
                }
                break;
        case 5://if user enters 5
                printf("Enter the number of rows >>");
                scanf("%d", &row);
                printf("Enter the number of columns >>");
                scanf("%d", &col);
                for(i=0;i<=row- 1;i++)
                {
                    for(j=0;j<=col- 1;j++)
                    {
                        printf("Enter a%d%d >>", i+ 1, j+ 1);
                        scanf("%d", &a[i][j]);
                    }
                }
                printf("Matrix ->>\n");
                for(i=0;i<=row- 1;i++)
                {
                    for(j=0;j<=col- 1;j++)
                    {
                        printf("%d ", a[i][j]);
                        if(j == col- 1)
                        {
                            printf("\n");
                        }
                    }
                }
                printf("Enter columns of second matrix >>");
                scanf("%d", &col1);
                row1 = col;
                for(i=0;i<row1;i++)
                {
                    for(j=0;j<col1;j++)
                    {
                        printf("Enter b%d%d >>", i+ 1,j+ 1);
                        scanf("%d", &b[i][j]);
                    }
                }
                printf("Matrix ->>\n");
                for(i=0;i<=row1- 1;i++)
                {
                    for(j=0;j<=col1- 1;j++)
                    {
                        printf("%d ", b[i][j]);
                    }
                    printf("\n");
                }
                //---
                for(i=0;i<row;i++)
                {
                    for(j=0;j<col1;j++)
                    {
                        c[i][j] = 0;
                        for(k=0;k<row1;k++)
                        {
                            sum += a[i][k]*b[k][j];
                        }
                        c[i][j]=sum;
                        sum=0;
                    }
                }
                    printf("Product of the matrix:->\n");
                    for(i=0; i <= row- 1;i++)
                    {
                        for(j=0;j <= col- 1;j++)
                        {
                            printf("%d ",c[i][j]);
                        }
                        printf("\n");
                    }
                    break;
            default:
                    printf("Wrong number. Please restrat the program.");
    }
    printf("\nThank you.\n");
    printf("Press Enter");
    getchar();
    getchar();
}