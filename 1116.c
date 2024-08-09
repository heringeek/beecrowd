#include <stdio.h>
 
int main() {
    
    float x, y;
    int i;
    scanf("%d", &i);
    while(--i >= 0)
    {
        scanf("%f", &x);
        scanf("%f", &y);
        if (y == 0) printf("divisao impossivel\n");
        else printf("%.1f\n" ,(x/y));
    }
    return 0;
}
