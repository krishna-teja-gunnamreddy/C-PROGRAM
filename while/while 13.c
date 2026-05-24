#include <stdio.h>
int main() {
    int n,data;
    scanf("%d%d",&data,&n);
    int count=0,i=1,data_used;
    while(i<=n){
        int used;
        scanf("%d",&used);
        data_used+=used;
        count++;
        if(data_used>data){
            break;
        }
        i++;
    }
   if(data_used>data){
    printf("Exhausted Day: %d\nOverused Data: %d",count,data_used-data);
   }
   else{
    printf("Exhausted Day: %d\nOverused Data: %d",count,data-data_used);
   }
    return 0;
}