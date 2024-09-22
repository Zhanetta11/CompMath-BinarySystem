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
    printf("\n");
}


void convertFractionalPart(double fractionalPart, int nk) {
    int binaryFractional[64];
    
    for (int i = 0; i < 64; i++) {
        binaryFractional[i] = 0;
    }
    
    if (fractionalPart == 0) {
        binaryFractional[0] = 0;
    } else {
        for (int i = 0; i < nk; i++) {
            fractionalPart *= 2; 
            int bit = (int)fractionalPart;
            binaryFractional[i] = bit; 
            fractionalPart -= bit;
        }
    }
    
    printf("Fractional Part: ");
    for (int i = 0; i < nk; i++) {
        printf("%d", binaryFractional[i]);
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
