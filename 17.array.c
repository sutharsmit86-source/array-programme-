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

    
    n--;

    
    printf("Array after deleting last element:\n");
    for(int i = 0; i < n; i++) 
    {
        printf("%d ", a[i]);
    }

    return 0;
}