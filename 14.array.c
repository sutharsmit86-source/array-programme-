#include <stdio.h>

int main() 
{
    int a[20];   
    int n, num;

    
    printf("Enter number of elements (max 20): ");
    scanf("%d", &n);

    
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }

    
    printf("Enter new number to insert at last: ");
    scanf("%d", &num);

    
    a[n] = num;
    n++;

    
    printf("Array after insertion:\n");
    for(int i = 0; i < n; i++) 
    {
        printf("%d ", a[i]);
    }

    return 0;
}