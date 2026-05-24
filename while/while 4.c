#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int i=1,streak=0,max=0;
    while(i<=n){
        int status;
        scanf("%d",&status);
        if(status==0){
            streak++;
        }
        else if(status==1){
            streak=0;
        }
        if(streak>max){
            max=streak;
        }
        i++;
    }
    printf("Longest Failure Streak: %d",max);
    return 0;
}