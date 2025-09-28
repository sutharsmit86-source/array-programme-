#include <stdio.h>

int main() 
{
    int a[20];
    int n, pos;

    
    printf("Enter number of elements (max 20): ");
    scanf("%d", &n);

    
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }

    
    printf("Enter position to delete (1 to %d): ", n);
    scanf("%d", &pos);

    if(pos < 1 || pos > n) 
    {
        printf("Invalid position!\n");
    } else {
        
        for(int i = pos - 1; i < n - 1; i++) 
        {
            a[i] = a[i + 1];
        }
        n--; 

        printf("Array after deletion:\n");
        for(int i = 0; i < n; i++) 
        {
            printf("%d ", a[i]);
        }
    }

    return 0;
}