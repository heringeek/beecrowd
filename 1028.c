#include <stdio.h>

int mdc(int f1, int f2) 
{
    while (f2 != 0) 
    {
        int temp = f2;
        f2 = f1 % f2;
        f1 = temp;
    }
    return f1;
}

int main() 
{
    int n, f1, f2;
    scanf("%d", &n);

    while (n-- > 0) 
    {
        scanf("%d %d", &f1, &f2);
        printf("%d\n", mdc(f1, f2));
    }

    return 0;
}

