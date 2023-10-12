#include <stdio.h>
#include <stdbool.h>

//Algorithm E
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

//Algorithm F
int algorithmF(int m, int n) {
    while (true) {
        m = m % n;
        if (m == 0) {
            return n;
        }
        n = n % m;
        if (n == 0){
            return m;
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
    int output2 = algorithmF(m, n);

    printf("Euclids Algorithm output: %d\n", output);
    
    printf("Algorithm F output: %d", output2);

    return 0;
}