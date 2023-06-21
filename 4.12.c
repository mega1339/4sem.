#include <stdio.h>

int Tosixteen(char nums[]){
    int result=0, des;

    for (int i=0; nums[i] != '\0'; i++){

        if (nums[i] >= '0' && nums[i] <= '9'){
            des= nums[i] - '0';
        }
        else if (nums[i] >= 'A' && nums[i] <= 'F'){
            des= nums[i] - 'A' + 10;
        }
        else if (nums[i] >= 'a' && nums[i] <= 'f'){
            des= nums[i] - 'a' + 10;
        }
        else return -1;

        result = result*16 + des;
    }
    return result;
}


int BiTes(int result){
    int k=1, g=0;
    while (k <= result) 
    {
        if ((result && k) != 0)
            g++;
        k<<=2;
    }
    return g;
}