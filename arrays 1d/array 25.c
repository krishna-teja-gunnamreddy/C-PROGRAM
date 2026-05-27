#include <stdio.h>
int main() {
     int size,max=0;
    scanf("%d",&size);
    int arr[size];
    for (int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<size;i++){
        int product=0;
        for(int j=0;j<i;j++){
            product=arr[i]*arr[j];
            if(product>max){
                max=product;
            }
        }
    }
    printf("  %d",max);
    return 0;
}