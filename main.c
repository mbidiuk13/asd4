#include <stdio.h>
#include <math.h>

#define N 16

void fill_array(double array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Enter the number for the element %d: ", i + 1);
        scanf("%lf", &array[i]);
    }
}

void print_array(const char* name, double array[], int size) {
    printf("%s: ", name);
    for (int i = 0; i < size; i++) {
        printf("%.2f ", array[i]);
    }
    printf("\n");
}

double sum_of_squares_min_max(double array[], int size) {
    double min_val = array[0];
    double max_val = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] < min_val) min_val = array[i];
        if (array[i] > max_val) max_val = array[i];
    }
    return pow(min_val, 2.0) + pow(max_val, 2.0);
}

int main() {
    double array_a[N], array_b[N], array_c[N];

    printf("Filling of the array A\n");
    fill_array(array_a, N);
    printf("Filling of the array B\n");
    fill_array(array_b, N);

    for (int i = 0; i < N; i++) {
        array_c[i] = array_b[i] - array_a[i];
    }

    print_array("Array A", array_a, N);
    print_array("Array B", array_b, N);
    print_array("Array C", array_c, N);

    printf("sum (A): %.2f\n", sum_of_squares_min_max(array_a, N));
    printf("sum (B): %.2f\n", sum_of_squares_min_max(array_b, N));
    printf("sum (C): %.2f\n", sum_of_squares_min_max(array_c, N));

    return 0;
}
