#include <stdio.h>

int main(){

    const double PI = 3.14;
    double radius;
    double circumference;
    double area;


    printf("\nEnter radius of a circle: ");
    scanf("%lf", &radius);

    circumference = 2*PI*radius;
    area = PI*radius*radius;


    printf("Circumference of the circle is : %lf\nArea of the circle is: %lf", circumference, area);

    return 0;

}