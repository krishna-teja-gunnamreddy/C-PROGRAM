#include <stdio.h>
int main() {
    int balance;
    scanf("%d",&balance);
    if( balance>=1&&balance<1000){
        printf("Low Balance");             
    }
    else if(balance>=1000) {
        printf("Sufficient Balance");
    }
    else {
        printf("Invalid");
    }
    return 0;
}