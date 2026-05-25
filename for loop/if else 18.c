#include<stdio.h>
int main() {
    int cart_value;
    scanf("%d",&cart_value);
    if( cart_value>=499){
        printf("Free Delivery");             
    }
    else if(cart_value<499&&cart_value>0) {
        printf("Delivery Charges Apply");
    }
    else {
        printf("Invalid");
    }
    return 0;
}