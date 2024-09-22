#include <stdio.h>

void convertIntegerPart(int integerPart) {
    if (integerPart == 0) {
        printf("0\n");
    }
}


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
    
    convertIntegerPart(integerPart);

    return 0;
}
