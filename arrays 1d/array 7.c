#include <stdio.h>
int main() {
    int size;
    scanf("%d",&size);
    int arr[size],even_count=0,odd_count=0;
    for (int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<size;i++){
        if(arr[i]%2==0){
            even_count++;
        }
        else{
            odd_count++;
        }
    }
    printf("Even: %d\nOdd : %d",even_count,odd_count);
    return 0;
}