#include <stdio.h>

int main() {
    int amount;
    int notes[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};  
    int count[9];  
    int i;

    printf("Enter the amount: ");
    scanf("%d", &amount);

    for(i = 0; i < 9; i++) {
        count[i] = amount / notes[i];  
        amount = amount % notes[i];    
    }

    printf("Minimum number of notes:\n");
    for(i = 0; i < 9; i++) {
        if(count[i] != 0) {
            printf("%d notes of %d\n", count[i], notes[i]);
        }
    }

    return 0;
}