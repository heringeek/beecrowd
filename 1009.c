#include <stdio.h>
 
int main() 
{
    float sal, plus;
    char  name;
    
    scanf("%s", &name);
    scanf("%f", &sal);
    scanf("%f", &plus);
    printf("TOTAL = R$ %.2f\n", (sal + (plus * 0.15)));
 
    return 0;
}
