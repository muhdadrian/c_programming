#include <stdio.h>

int main () {

    float a = 19.0;
    float b = 5.0;
    float floatAnswer;

    int x = 19;
    int y = 5;
    int intAnswer;

    // using two float vars creates an answer of 3.8
    floatAnswer = a / b;
    printf("%.1f divided by %.1f equals %.1f\n", a, b, floatAnswer);

    floatAnswer = x / y; // Take 2 creates an answer of 3.0
    printf("%d divided by %d equals %.1f\n", x, y, floatAnswer);

    // this will also be 3, as it truncates and doesn't round up 
    intAnswer = a / b;
    printf("%.1f divided by %.1f equals %d\n", a, b, intAnswer);  

    intAnswer = x % y; // This calculates the remainder (4)
    printf("%d modulus (i.e. remainder of) %d equals %d\n", x, y, intAnswer);

    return 0;
} 