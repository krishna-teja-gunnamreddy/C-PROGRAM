#include <stdio.h>
int main() {
    int size,avg,sum;
    scanf("%d",&size);
    int arr[size];
    for (int i=0;i<size;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    avg=sum/size;
    int count=0;
    for(int i=0;i<size;i++){
        if(avg<arr[i]){
            count++;
        }
    }
    printf("  %d",count);
    return 0;
}