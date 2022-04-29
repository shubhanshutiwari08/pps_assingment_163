//A program to find the roots of a quadratic equation

#include <stdio.h>
#include <math.h>
int main(){
    float a,b,c,discriminant, root1, root2, realPart, imagPart;
    printf("Enter the coefficent of the quadratic equation :\n ");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    discriminant = (b*b) - (4*a*c);

    // real and different roots
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("root1 = %.2f\nroot2 = %.2f", root1, root2);
    }

    // real and equal roots
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %.2f;", root1);
    }

    // if roots are not real
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("root1 = %.2f+%.2fi\nroot2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
    }

    return 0;
}