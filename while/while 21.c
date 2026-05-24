#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int count=0,i=1,streak=0,max=0;
    while(i<=n){
        int vechile;
        scanf("%d",&vechile);
        if(vechile<20){
            streak=0;
        }
         
        if(vechile>20){
            count++;
            streak++;
        }
        if(max<streak){
            max=streak;
        }
        i++;
    }
    printf("Congestion Minutes: %d\nLongest Congestion Streak: %d",count,max);
    return 0;
}