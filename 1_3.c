#include <stdio.h>

int main()
{
    int Input,i,Sum_Digits;
    Sum_Digits=0;
    printf("Input:");
    scanf("%d", &Input);
    printf("Output:");
    for( i=31; i>=0; i--)
    {
        printf("%d",(Input>>i) & 0x1);
        Sum_Digits+=(Input>>i) & 0x1;
    }
    printf("\nSumm digit:%d",Sum_Digits);
}