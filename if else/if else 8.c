#include <stdio.h>
int main() {
    int days;
    scanf("%d",&days);
    if(days>0&&days<=5){
        printf(" Weekday");
    }
    else if(days>=6&&days<8){
        printf(" Weekend ");
    }
    else{
        printf("Invalid day");
    }
    return 0;
}