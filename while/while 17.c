#include <stdio.h>
int main() {
    int n,amount;
    scanf("%d%d",&amount,&n);
    int count=0,i=1,balance=amount;
    while(i<=n){
        int purchase;
        scanf("%d",&purchase);
        if(balance>purchase){
            count++;
            balance-=purchase;
        }
        if(balance<purchase){
            break;
        }
        i++;
    }
    printf("Successful Purchases: %d\nFinal Balance: %d",count,balance);
    return 0;
}