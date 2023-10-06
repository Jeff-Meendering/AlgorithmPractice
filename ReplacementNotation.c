/*
Show how to interchange the values of variables m and n using replacement notation
(a, b, c, d) to (b, c, d, a)
*/

#include <stdio.h>

int main() {
    int a, b, c, d;

    printf("Enter the value for a\n");
    scanf("%d", &a);
    printf("Enter the value for b\n");
    scanf("%d", &b);
    printf("Enter the value for c\n");
    scanf("%d", &c);
    printf("Enter the value for d\n");
    scanf("%d", &d);


    int arr[] = {a, b, c, d};

    int temp = arr[0];

    arr[0] = arr[1];
    arr[1] = arr[2];
    arr[2] = arr[3];
    arr[3] = temp;

    printf("Replacement Notation: (%d, %d, %d, %d)", arr[0], arr[1], arr[2], arr[3]);

    return 0;
}