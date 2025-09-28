#include <stdio.h>
#define ROW 2
#define COL 2

int main() {
    int a[ROW][COL] = {{1, 2}, {3, 4}};
    int b[ROW][COL] = {{5, 6}, {7, 8}};
    int result[ROW][COL];

    // Initialize result array to 0
    for(int i = 0; i < ROW; i++) 
    {
        for(int j = 0; j < COL; j++) 
        {
            result[i][j] = 0;
        }
    }

    
    for(int i = 0; i < ROW; i++)
    {
        for(int j = 0; j < COL; j++)
         
        {
            for(int k = 0; k < COL; k++) 
            {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Print result
    printf("Multiplication of arrays:\n");
    for(int i = 0; i < ROW; i++) {
        for(int j = 0; j < COL; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}