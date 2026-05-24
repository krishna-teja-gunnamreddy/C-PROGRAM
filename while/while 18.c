#include <stdio.h>
int main() {
    int capacity,n;
    scanf("%d%d",&capacity,&n);
    int safe=0,risk=0,i=1;
    while(i<=n){
        int hours;
        scanf("%d",&hours);
        if(hours<capacity){
            safe++;
        }
        else{
            risk++;
        }
        i++;
    }
    printf("Safe Hours: %d\nFailure Count: %d",safe,risk);
    return 0;
}