#include <stdio.h>

int main() {
    int n;
    printf("Enter n:");
    scanf("%d", &n);
    int a = n%10;
    if(a==0 || a==5 || a==6 || a==7 || a==8 || a==9){
        printf("%d rokiv", n);
    }else if(a==1){
        printf("%d rik", n);
    }else if(a==2 || a==3 || a==4){
        printf("%d roki", n);
    }
    return 0;
}