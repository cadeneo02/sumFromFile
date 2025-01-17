#include <stdio.h>

int sumFromFile(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 0;
    }
    int sum = 0;
    int num;
    while (fscanf(file, "%d", &num) != EOF) {
        sum += num;
    }
    fclose(file);
    return sum;
}

int main() {
    const char *filename = "numbers.txt";
    int result = sumFromFile(filename);
    printf("Sum of numbers from file '%s' is: %d\n", filename, result);
    return 0;
}