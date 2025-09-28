#include <stdio.h>

int main() 
{
    int a[11];  
    int n, num;

    
    printf("Enter number of elements (max 10): ");
    scanf("%d", &n);

    
    
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }

    
    printf("Enter new number to insert at beginning: ");
    scanf("%d", &num);

    
    for(int i = n; i > 0; i--) 
    {
        a[i] = a[i - 1];
    }
    
    a[0] = num;
    n++;

    printf("Array after insertion:\n");
    for(int i = 0; i < n; i++) 
    {
        printf("%d ", a[i]);
    }

    return 0;
}