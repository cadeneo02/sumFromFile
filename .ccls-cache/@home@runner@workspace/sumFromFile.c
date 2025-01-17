#include <stdio.h>

int sumFromFile(const char *filename) {
    FILE *file = fopen(filename, "r");
    int sum = 0, num;
    while (fscanf(file, "%d", &num) != EOF) sum += num;
    fclose(file);
    return sum;
}

int main() {
    printf("Sum of Numbers: %d\n", sumFromFile("numbers.txt"));
    return 0;
}