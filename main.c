#include <stdio.h>
#include "4.h"

int main()
{

    int i, c, Task1, Task2;
    char nums[100];

    for (i=0;(c = getchar())  != '\n'; i++)
        nums[i]=c;
    nums[i]='\0';

    Task1 = Tosixteen(nums);
    Task2 = BiTes(Task1);

    printf ("Task 1: %d\n", Task1);
    printf ("Task 2: %d\n", Task2);
}