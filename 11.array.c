#include <stdio.h>

int main() 
{
    int a[10], b[10], n, dir;

    
    printf("Enter 10 elements:\n");
    for(int i = 0; i < 10; i++) 
    {
        scanf("%d", &a[i]);
    }
    
    printf("Enter number of positions to shift: ");
    scanf("%d", &n);

    
    printf("Enter direction (1 = right, 2 = left): ");
    scanf("%d", &dir);

    
    for(int i = 0; i < 10; i++) 
    {
        b[i] = 0;
    }

    if(dir == 1) 
    {  
        
        for(int i = 0; i < 10; i++) 
        {
            if(i + n < 10) 
            {
                b[i + n] = a[i];
            }
        }
    }
    else if(dir == 2) 
    {  
        
        for(int i = 0; i < 10; i++) 
        {
            if(i - n >= 0) 
            {
                b[i - n] = a[i];
            }
        }
    }

    
    printf("Array after shifting:\n");
    for(int i = 0; i < 10; i++) 
    {
        printf("%d ", b[i]);
    }

    return 0;
}