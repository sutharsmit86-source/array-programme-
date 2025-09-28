#include <stdio.h>

int main() 
{
    int a[5] = {1, 2, 3, 4, 5};
    int b[10];  

    int j = 0;
    for(int i = 0; i < 5; i++)
    {
        b[j] = a[i];   
        j += 2;        
    }

    
    for(int i = 0; i < 10; i++) 
    {
        if(i % 2 != 0) 
        {
            b[i] = 0;
        }
    }

    
    printf("New array:\n");
    for(int i = 0; i < 10; i++) 
    {
        printf("%d ", b[i]);
    }

    return 0;
}