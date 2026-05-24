#include <stdio.h>
#include<limits.h>
int main() {
    int n;
    scanf("%d",&n);
    int count=0,day=0,i=1,crash=INT_MIN,days=0;
    while(i<=n){
        int drop;
        scanf("%d",&drop);
       day++;
        if(crash<drop){
            crash=drop;
        }
         
        if(crash>drop){
            count++;
            crash=drop;
        }
        if(count==3){
            days=day;
        }
        i++;
    }
    if(count>=3){
        printf("Crash Day: %d\nTotal Drops: %d",days,count);
    }
    else{
        printf("Crash Day: Not Detected\nTotal Drops: %d",count);
    }
    return 0;
}