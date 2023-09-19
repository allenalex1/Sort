#include <stdio.h>

int main(void)
{
    int abc[5] = {9,8,7,6,5};

    for (int i = 4; i >= 0; i--)
    {
        for (int j = 0; j <= i - 1; j ++)
        {
            if (abc[j] > abc[j+1])
            {
                int temp = abc[j+1];
                abc[j+1] = abc[j];
                abc[j] = temp;
            } 
        }
    }
    for ( int i = 0; i < 5; i++)
    {
        printf("%d", abc[i]);
    }
    
}


    // for ( int i = 0; i < 5; i++)
    // {
    //     printf("Enter Number\n");
    //     scanf("%d", &abc[i]);
    // }
    // for ( int i = 0; i < 5; i++)
    // {
    //     printf("%d", abc[i]);
    // }