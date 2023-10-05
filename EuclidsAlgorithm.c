#include <stdio.h>
#include <stdbool.h>

int euclidsAlgorithm(int m, int n) {
    int r;
    while (true) {
        r = m % n;
        if (r == 0) {
            return n;
        } else {
            m = n;
            n = r;
        }
    }
}

int main() {
    int m, n;

    printf("Enter int m: ");
    scanf("%d", &m);

    printf("Enter int n: ");
    scanf("%d", &n);

    int output = euclidsAlgorithm(m, n);

    printf("Euclids Algorithm output: %d", output);
    return 0;
}