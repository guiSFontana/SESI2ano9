#include <stdio.h>

int mdc(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int mmc = 1;

    for (int i = 1; i <= 20; i++) {
        mmc = mmc / mdc(mmc, i) * i;
    }

    printf("O menor numero divisivel por 1 ate 20 eh: %d\n", mmc);

    return 0;
}