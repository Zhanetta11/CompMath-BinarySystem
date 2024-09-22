#include <stdio.h>

void convertIntegerPart(int integerPart) {
    if (integerPart == 0) {
        printf("Integer Part: 0\n");
    }

    int binary[32]; 
    int i = 0;

    while (integerPart > 0) {
        binary[i] = integerPart % 2;
        integerPart /= 2; 
        i++;
    }

    printf("Integer Part: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]); 
    }
}


void convertFractionalPart(double fractionalPart, int nk) {   
    if (fractionalPart == 0) {
        printf("Fractional Part: 0\n");
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
    convertFractionalPart (fractionalPart, nk);

    return 0;
}
