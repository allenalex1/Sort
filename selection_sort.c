#include <stdio.h>

int main(void)
{
    int abc[5] = {2,8,2,3,5};

    for (int i = 0; i < 4; i++)
    {
        
        int min = abc[i];
        int l;
        
        for (int j = 1; j <= (4-i); j++ )
        {
            
            if (abc[i+j] < min )
            {
                min = abc[i+j];
                l = i+j;
            }
        }
        if (abc[i] != min)
        {
            int temp = abc[i];
            abc[i] = min;
            abc[l] = temp;
        }
        
        

    }
    for ( int i = 0; i < 5; i++)
    {
        printf("%d", abc[i]);
    }
}