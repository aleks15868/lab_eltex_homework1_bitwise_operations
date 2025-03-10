#include <stdio.h>

int main()
{
    int Input,i;
    printf("Input:");
    scanf("%d", &Input);
    printf("Output:");
    for( i=31; i>=0; i--)
    {
        printf("%d",(Input>>i) & 0x1);
    }

}