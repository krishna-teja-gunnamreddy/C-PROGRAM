#include <stdio.h>
int main() {
    int data,days;
    scanf("%d%d",&data,&days);
    int temp=data;
    int count=0,i=1,remaining=0;
    while(i<=days){
        int data_used;
        scanf("%d",&data_used);
        remaining+=data_used;
        if(remaining<=data){
            count++;
            
        }
        temp-=data_used;
        i++;
    }

    if(temp<0){
        printf("Days Used: %d\nRemaining Data: 0",count);
    }
    else{
    printf("Days Used: %d\nRemaining Data: %d",count,temp);
    }
    return 0;
}