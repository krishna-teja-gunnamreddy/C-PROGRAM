#include <stdio.h>
int main() {
    int num;
    scanf("%d",&num);
    int cash=0;
    for (int i=0;i<num;i++){
        int amount;
        scanf("%d",&amount);
        cash+=amount;
    }
    if(cash<10000){
        printf("Approved");
    }
    else{
        printf("Limit Exceeded");
    }
    return 0;
}