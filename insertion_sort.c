#include <stdio.h>

int main()
{
    int abc[5] = {9,8,5,3,4};

    for (int i = 1; i < 5; i++)
    {
        int j = i;
        while (abc[j-1] > abc[j])
        {
            int temp = abc[j-1];
            abc[j-1] = abc[j];
            abc[j] = temp;
            j = j - 1 ;

        }
    }
    for ( int i = 0; i < 5; i++)
    {
        printf("%d", abc[i]);
    }
}