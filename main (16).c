#include <stdio.h>

int main() {
    float a, x, y;
    printf("Enter a:");
    scanf("%f", &a);
    printf("Enter x:");
    scanf("%f", &x);
    printf("Enter y:");
    scanf("%f", &y);
    while(y<x){
        printf("Irregular values. Try again.\n");
        printf("Enter x:");
        scanf("%f", &x);
        printf("Enter y:");
        scanf("%f", &y);
    }
    if(x<=a && a<=y){
        printf("a is in [x; y]");
    }else{
        printf("a is NOT in [x; y]");
    }
    return 0;
}