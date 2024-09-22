#include <stdio.h>

int main()
{
    double myNum;
    printf("Enter a decimal number: ");
    scanf("%lf", &myNum);
      
    int integerPart = (int)myNum; 
    double fractionalPart = myNum - integerPart;
    
    int nk;
    printf("Enter nk: ");
    scanf("%d", &nk);

    return 0;
}
