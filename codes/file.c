#include <stdio.h>
#include <math.h>

int main() {
    FILE *file;
    file = fopen("function_data.dat", "w");

    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Generate 10 data points and write to file
    double x, result;
    for (int i = 1; i <= 10; i++) {
        x = i;
        result = 1.0 / x - 1.0 / (x * x);
        fprintf(file, "%.2f %.6f\n", x, result);
    }

    fclose(file);
    printf("Data generated and saved to function_data.dat\n");

    return 0;
}

