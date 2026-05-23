#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if(a>9&&a<21){
        printf("Number is within range");
    }
    else{
        printf("Number is Not within range");
    }
    return 0;
}