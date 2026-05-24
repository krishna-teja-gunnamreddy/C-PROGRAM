#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int count=0,attempt=0,i=1,streak=0,locked,a=0;
    while(i<=n){
        int lock;
        scanf("%d",&lock);
       a++;
        if(lock==1){
            attempt=0;
        }
         
        if(lock==0){
            count++;
            attempt++;
        }
        if(streak<attempt){
            streak=attempt;
        }
        if(streak==3){
            locked=a;
        }
        i++;
    }
    if(streak>=3){
        printf("Lock Triggered At Attempt: %d\nTotal Failed Attempts: %d",locked,count);
    }
    else{
        printf("Lock Triggered At Attempt: Not Locked\nTotal Failed Attempts: %d",count);
    }
    return 0;
}