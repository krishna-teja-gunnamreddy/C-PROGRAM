#include <stdio.h>
#include<limits.h>
int main() {
    int n;
    scanf("%d",&n);
    int i=1,count=0,b=0,v=1;
    while(i<=n){
        int vibration;
        scanf("%d",&vibration);
        if(vibration>b){
            b=vibration;
        }
        else{
            v=i-1;
             b=vibration;
          
        }
        if(vibration>70){
            count++;
        }
        i++;
    }
    if(v>0){
        printf("Breakdown At Readings: %d\nUnsafe Readings: %d",v,count);
    }
    else{
        printf("Breakdown At Readings: Not Occurred\nUnsafe Readings: %d",count);
    }
    return 0;
}