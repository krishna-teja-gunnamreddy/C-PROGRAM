#include <stdio.h>
int main() {
    int salary;
    int abscent;
    scanf("%d",&salary);
    scanf("%d",&abscent);
   int  final_salary=salary;
    for(int i=0;i<abscent;i++){
        final_salary-=100;
    }
    printf("%d",final_salary);
    return 0;
}