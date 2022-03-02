#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main (void) {
    clock_t start = clock();
    
    long long int result = 0;

    for (int i = 0; i < 1000000001; i++) {
        result += i;
    }

    printf("%lli\n", result);
    
    clock_t end = clock();
    double time_spent = (double)(end - start) / CLOCKS_PER_SEC;

    printf("%f\n", time_spent);
}
