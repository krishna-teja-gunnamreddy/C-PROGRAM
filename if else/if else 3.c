#include <stdio.h>
int main() {
    int discount ;
    scanf("%d",&discount);
    if(discount>=1000){
        printf(" Discount Applied");
    }
    else{
        printf("No Discount");
    }
    return 0;
}