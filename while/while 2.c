#include <stdio.h>
int main() {
    int days;
    scanf("%d",&days);
    int balance;
    scanf("%d",&balance);
    int count=0;
    int i=1;
    while(i<=days){
        int transaction;
        scanf("%d",&transaction);
        balance+=transaction;
        if(balance<2000){
            count++;
        }
        i++;
    }
    printf("Final Balance: %d\nLow Balance Days: %d",balance,count);
    return 0;
}