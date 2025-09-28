#include <stdio.h>

int main() 
{
    int a[20];   
    int n, num, pos;

    
    printf("Enter number of elements (max 20): ");
    scanf("%d", &n);

    
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }

    
    printf("Enter new number: ");
    scanf("%d", &num);
    printf("Enter position to insert (1 to %d): ", n+1);
    scanf("%d", &pos);

    
    for(int i = n; i >= pos; i--)
    {
        a[i] = a[i - 1];
    }

    a[pos - 1] = num;
    n++;

    
    printf("Array after insertion:\n");
    for(int i = 0; i < n; i++) 
    {
        printf("%d ", a[i]);
    }

    return 0;
}