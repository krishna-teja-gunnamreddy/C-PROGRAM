#include <stdio.h>
int main() {
    int max_weight,n;
    scanf("%d%d",&max_weight,&n);
    int temp=max_weight;
    int count=0,i=1,remaining=0;
    while(i<=n){
        int person_weight;
        scanf("%d",&person_weight);
        remaining+=person_weight;
        if(remaining<=max_weight){
            count++;
        }
        i++;
    }
    if(remaining>max_weight){
        printf("Passengers Allowed: %d\nOver Load: Yes",count);
    }
    else{
    printf("Passengers Allowed: %d\nOver Load: Yes",count);
    }
    return 0;
}