#include <stdio.h>
int main() {
    int size;
    scanf("%d",&size);
    int arr[size];
    int sum=0;
    for(int i=0;i<size-1;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    int sum2=0;
    for(int i=1;i<=size;i++){
        sum2+=i;
    }
    
    printf("\n Missing Number: %d",(sum2-sum));
    return 0;
}