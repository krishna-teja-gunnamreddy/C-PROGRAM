#include <stdio.h>
int main() {
    int size;
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    int k;
    scanf("%d",&k);
    for (int i=k;i<size;i++){
        printf("%d ",a[i]);
    }
    for(int i=0;i<k;i++){
        printf("%d ",a[i]);
    }
    return 0;
}