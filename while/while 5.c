#include <stdio.h>
int main() {
    int orders;
    scanf("%d",&orders);
    int sucess=0,cancel=0,i=1;
    while(i<=orders){
        int n;
        scanf("%d",&n);
        if(n==1){
            sucess++;
        }
        else if(n==0){
            cancel++;
        }
        i++;
    }
    printf("Sucessful: %d\nCancelled: %d\n",sucess,cancel);
    if(cancel<=sucess){
        printf("Status: Safe");
    }
    else{
        printf("Status: Risk");
    }
    return 0;
}