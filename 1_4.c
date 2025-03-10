#include <stdio.h>

int main()
{
    int Input_First_Number,i,Changes_Number;
    printf("Input number:");
    scanf("%d", &Input_First_Number);
    printf("Two number:");
    scanf("%d", &Changes_Number);
    if ((Changes_Number>0) && (Changes_Number<256))
    {
        Input_First_Number=(Input_First_Number & 0xFF00FFFF)+(Changes_Number<<16);
        printf("Output:%d",Input_First_Number);
    }
    else
    {
        printf("The second number is out of range [0; 255]");
    }
    
}