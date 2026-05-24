#include <stdio.h>
int main() {
   int n;
   scanf("%d",&n);
   int sum=0,i=1,count=0;
   while(i<=n){
    int hours;
    scanf("%d",&hours);
    if(hours>4){
        count++;
    }
    sum+=hours;
    i++;
   }
   printf("Total Overtime: %d\nBurnout Days: %d",sum,count);
    return 0;
}