#include <stdio.h>
int main() {
    int a;
    
    int r;
    scanf("%d",&a);
    int sum=0;
    int temp=a;
    
    for(int i=0;a>0;i++){
        r=a%10;
        printf("%d\n",r);
        int fact=1;
        for(int j=1;j<=r;j++){
            fact*=j;
        }
        sum+=fact;
        a/=10;
    }
    printf("%d",sum);
    if(temp==sum){
        printf("equal");
    }else{
        printf("not");
    }
    return 0;
}