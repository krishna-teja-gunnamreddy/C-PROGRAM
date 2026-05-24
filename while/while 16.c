#include <stdio.h>
int main() {
    int n,max;
    scanf("%d%d",&max,&n);
    int count=0,i=1,balance=max;
    while(i<=n){
        int weight;
        scanf("%d",&weight);
        if(max>weight){
            count++;
            max-=weight;
        }
        balance-=weight;
        i++;
    }
   if(balance>=0){
    printf("People Entered: %d\nOverload Status: No",count);
   }
   else{
    printf("People Entered: %d\nOverload Status: Yes",count);
   }
    return 0;
}