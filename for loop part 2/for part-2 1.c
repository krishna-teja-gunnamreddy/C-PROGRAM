#include <stdio.h>
int main() {
    int days;
    scanf("%d",&days);
    int sum=0;
    int count=0; 
    for(int i=1;i<=days;i++){
        int expense;
        scanf("%d",&expense);
        if(expense>1000){
            count++;
        }
        sum+=expense;
    }
    printf("total expense: %d\n",sum);
    printf("over spend days: %d ",count);
    return 0;
}