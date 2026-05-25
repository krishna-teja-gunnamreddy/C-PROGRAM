#include <stdio.h>
int main() {
    int attempt;
    scanf("%d",&attempt);
    if( attempt > 3 ){
        printf("Account Locked");             
    }
    else if(attempt < 4 &&attempt > 0) {
        printf(" Login Allowed");
    }
    else {
        printf("Invalid");
    }
    return 0;
}