#include <stdio.h>

int main() {
    float x, y;
    printf("Enter x:");
    scanf("%f", &x);
    printf("Enter y:");
    scanf("%f", &y);
    while(y==-2){
        printf("Irregular y. Try again.\n");
        printf("Enter y:");
        scanf("%f", &y);
    }
    float res = x*x + ((2*x - 10)/(y+2));
    printf("Result is: %f", res);
    return 0;
}