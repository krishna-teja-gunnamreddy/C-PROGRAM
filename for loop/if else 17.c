#include<stdio.h>
int main() {
    int battery_status;
    scanf("%d",&battery_status);
    if( battery_status>20&&battery_status<=100){
        printf(" Battery OK");             
    }
    else if(battery_status<=20&&battery_status>0) {
        printf(" Low Battery");
    }
    else {
        printf("Invalid");
    }
    return 0;
}