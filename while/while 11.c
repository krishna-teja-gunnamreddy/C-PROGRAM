#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int i=1,count=0;
    int sum=0;
    while(i<=n){
        int hours;
        scanf("%d",&hours);
        if(hours>2){
            count++;
        }
        sum+=hours;
        i++;
    }
    printf("Total Delay: %d\nDelayed Days: %d",sum,count);
    return 0;
}