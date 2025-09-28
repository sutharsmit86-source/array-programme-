#include <stdio.h>

int main() 
{
    int a[20];
    int n;

    
    printf("Enter number of elements (max 20): ");
    scanf("%d", &n);

    
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }

    
    for(int i = 0; i < n - 1; i++) 
    {
        a[i] = a[i + 1];
    }
    n--;  

    
    printf("Array after deleting first element:\n");
    for(int i = 0; i < n; i++) 
    {
        printf("%d ", a[i]);
    }

    return 0;
}