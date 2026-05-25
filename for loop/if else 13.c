#include <stdio.h>
int main() {
    int attendance;
    scanf("%d",&attendance);
    if( attendance>=75&&attendance<=100){
        printf(" Eligible");             
    }
    else if(attendance<75&&attendance>0) {
        printf(" Not Eligible");
    }
    else {
        printf("Invalid");
    }
    return 0;
}