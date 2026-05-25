#include <stdio.h>
int main() {
    int age;
    scanf("%d",&age);
    if( age>=18&&age<=70){
        printf(" Eligible");             
    }
    else if(age>0) {
        printf(" Not Eligible");
    }
    else {
        printf("Invalid");
    }
    return 0;
}