#include <stdio.h>

int main() {
    int n;

    do {
        scanf("%d", & n);

        if (n >= 1 && n <= 10) {

            for (int i = 1; i <= 10; i++) {

                printf("%d\n", i * n);
            }
        } else {}

    } while (n < 1 || n > 10);

    return 0;
}