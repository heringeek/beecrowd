#include <stdio.h>

int main() {
    int x;
    while (scanf("%d", &x) && x != 0) {
        for (int i = 1; i <= x; i++) {
            printf("%d%c", i, (i == x) ? '\n' : ' ');
        }
    }
    return 0;
}

