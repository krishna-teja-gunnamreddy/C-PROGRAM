#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    switch (a){
        case 1:
        printf("sum=%d",b+c);
        break;
        case 2:
        printf("difference=%d",b-c);
        break;
        case 3:
        printf("multiplication=%d",b*c);
        break;
        case 4:
        printf("division=%d",b/c);
        break;
        case 5:
        printf("modulus=%d",b%c);
        break;
        default:
        printf("wrong opearotor");
    }
    return 0;
}