#include <stdio.h>
int main() {
    int type,amount,balance;
    scanf("%d%d%d",&type,&balance,&amount);
    switch (type){
        case 1:
        if(amount<balance){
            printf("Transaction Successfull ");
        }
        else{
            printf("Transaction rejected");
        }
        break;
        case 2:
        if((amount<balance)&&amount<=5000)
        {
            printf("Transaction Successfull ");
        }
        if((amount<balance)&&amount>5000)
        {
            printf("Limit Exceeded ");
        }
        else{
            printf("Transaction rejected");
        }
        break ;
        default:
        printf("invalid input");
    }

    return 0;
}