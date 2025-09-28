#include <stdio.h>

int main() 
{
    int a[20];
    int n, value, found = 0;
    printf("Enter number of elements (max 20): ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }
    printf("Enter value to search: ");
    scanf("%d", &value);
    for(int i = 0; i < n; i++) 
    {
        if(a[i] == value) 
        {
            printf("Value %d found at position %d\n", value, i + 1);
            found = 1;
        }
    }
    if(!found) 
    {
        printf("Value %d not found in array\n", value);
    }
    return 0;
}