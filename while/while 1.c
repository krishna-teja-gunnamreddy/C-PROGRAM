#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int i=1;
    int count=0;
     int streak=0,max=0;
    while(i<=n){
        int noise;
        scanf("%d",&noise);
        if(noise>70){
            count++;
            streak++;
        }
        else{
            streak=0;
        }
        if(streak>max){
            max=streak;
        }
        i++;
    }

    printf("Noise Violation: %d\nLongest Violation streak: %d",count,max);
    return 0;
}