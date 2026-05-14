#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main()
{

    int *nums;
    int addednums = 0;
    int currentnums = 0;
    int i = 0;
    int count = 5;

    
    printf("Please enter 5 numbers: \n");

    for ( i = 0; i < count; i++)
    {
        scanf("%d" , &nums[i]);
    }
    
    for ( i = 0; i < count; i++)
    {
        currentnums = nums[i];
        addednums = addednums + currentnums;
    }
    
    printf("Your the total of your entered nums is: \n %d\n", addednums);
    
    return 0;
}