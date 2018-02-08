#include <stdio.h>
#include <stdlib.h>

// Get the number of inputs from the user
// Sum the inputs together.
int main(int argc, char* argv[]){
    if (argc < 2) {
        printf("Please pass at least one integer argument \n");
        return 1;
    }
    int z = atoi(argv[1]);
    int* n = (int*)malloc(sizeof(int)*z);
    int i;
    int sum = 0;
    for (i=0; i < z; i++) {
        printf("Please enter an integer : "); 
        scanf("%d", n+i);
        sum += n[i];
    }

    printf("Sum of all numbers is: %d\n", sum);
    free(n);
    return 0; 
} 