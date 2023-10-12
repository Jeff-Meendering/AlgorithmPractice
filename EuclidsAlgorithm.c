#include <stdio.h>
#include <stdbool.h>

int euclidsAlgorithm(int m, int n) {
    int r;
    while (true) {
        // E1
        r = m % n;

        //E2
        if (r == 0) {
            return n;

            //E3
        } else {
            m = n;
            n = r;

            //Proof that m is always greater than n at the beginning of step E1
            //Except possibly the first time this step occurs
            bool temp = m > n;
            if (temp == true) {
                printf("m > n\n");
            } else {
                printf("n > m\n");
            }
            
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