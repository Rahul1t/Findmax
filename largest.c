#include <stdio.h>

int findmax(int arry[], int size) {
    int max = arry[0];

    for (int i = 0; i < size; i++) {
        if (arry[i] > max) {
            max = arry[i];
        }
    }
    return max;
}

int main() {
    int n, maxelement;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arry[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arry[i]);
    }

    maxelement = findmax(arry, n);
    printf("The max element is: %d\n", maxelement);

    return 0;
}
