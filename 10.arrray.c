#include <stdio.h>

int main() 
{
    int a[10], freq[10], visited = -1;

    
    printf("Enter 10 elements:\n");
    for(int i = 0; i < 10; i++) 
    {
        scanf("%d", &a[i]);
        freq[i] = 0;   
    }

    
    for(int i = 0; i < 10; i++) 
    {
        if(freq[i] == 0) 
        {
            int count = 1;
            for(int j = i + 1; j < 10; j++) 
            {
                if(a[i] == a[j]) 
                {
                    count++;
                    freq[j] = visited;  
                }
            }
            freq[i] = count;
        }
    }

    
    printf("\nFrequency of each element:\n");
    for(int i = 0; i < 10; i++) 
    {
        if(freq[i] != visited) 
        {
            printf("%d occurs %d times\n", a[i], freq[i]);
        }
    }

    return 0;
}