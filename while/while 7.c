#include <stdio.h>
int main() {
   int total_beds;
    scanf("%d",&total_beds);
    int n;
    scanf("%d",&n);
    int i=1,count=0,sum;
    int m=0;
    
    while(i<=n){
        int beds_occupy;
        scanf("%d",&beds_occupy);
        sum+=beds_occupy;
        if(sum>((total_beds/100)*90)){
            count++;
        }
        i++;
    }
    printf("Final Occupied Beds: %d\nCritical Hours: %d",sum,count);
    return 0;
}