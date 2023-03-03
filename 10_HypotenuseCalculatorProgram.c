#include <stdio.h>
#include <math.h>

int main(){

    double hypotenuse;
    double A;
    double B;

    printf("Enter the first side: ");
    scanf("%lf", &A);

    printf("Enter the second side: ");
    scanf("%lf", &B);

    hypotenuse = sqrt(A*A + B*B);

    printf("\nHypotenuse is: %lf", hypotenuse);

    return 0;
}