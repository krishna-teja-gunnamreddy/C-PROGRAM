#include <stdio.h>
int main() {
    int n,amount;
    scanf("%d%d",&amount,&n);
    int count=0,i=1,balance=amount;
    while(i<=n){
        int withdraw;
        scanf("%d",&withdraw);
        if(balance>withdraw){
            count++;
            balance-=withdraw;
        }
        if(balance<withdraw){
            break;
        }
        i++;
    }
    printf("Successful Withdrawals: %d\nRemaining Cash: %d",count,balance);
    return 0;
}