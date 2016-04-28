#include <stdio.h>

int main ()
{
    int count;
    
    for(count=0; count<= 5000; count+=2)
    {
        printf("%d\n", count);
    }
    printf("\n Este Num = %d", count);
    return 0;
}