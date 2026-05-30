#include <stdio.h>
int main() {
    int num;
    scanf("%d",&num);
    int temp=num;
    int sum=0;
    for(int i=1;num>0;i++){
        int a;
        a=num%10;
        sum+=(a*a*a);
        num/=10;
    }
    if(sum==temp){
        printf("%d is a armstrong number",temp);
    }
    else{
        printf("%d is not a armstrong",temp);
    }
    return 0;
}