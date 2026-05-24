#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int i=1,streak=0,count=0;
    while(i<=n){
        int m;
        scanf("%d",&m);
        if(m==0){
            count++;
        }
        else if(m==1){
            count=0;
        }
        if(count>streak){
            streak=count;
        }
        i++;
    }    
    printf("Longest Default Streak: %d",streak);
    return 0;
}