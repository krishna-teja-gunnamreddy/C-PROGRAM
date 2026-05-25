#include <stdio.h>
int main() {
    int age;
    scanf("%d",&age);
    if( age>=1&&age<13){
        printf(" Discount Ticket");             
    }
    else if(age>0) {
        printf(" Regular Ticket ");
    }
    else {
        printf("Invalid");
    }
    return 0;
}