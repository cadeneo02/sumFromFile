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

/* Course/Grade Reflection

Overall, I believe that I have made improvements in my understanding of the subjects we have covered in this class, and that I have improved since my midterm grade and reflection. My attendance has been good throughout the semester. I missed a few classes due to circumstances that I cannot control as a commuter student, so I think I’ve had the best attendance I could have. I believe that my class participation has been ok. I have graded other students assignments quickly and provided feedback, but my in class participation could have been more. I believe that the work for the assignments have been good this semester. Because it has been my first time learning some of these subjects, I have had some errors present in my work. I believe that my midterm assignment was my poorest, and was the one that could have used the most improvement. Despite this, I have done a good job learning about my errors and the correct ways to fix them. I think my understanding of these subjects overall has greatly improved. Subjects like memory hierarchy, program optimization and organization, and memory allocation and size have improved in this course. I also think my programs have become much more organized since starting this course as well. Based on my midterm grade, assignments, and overall opinion on my work in this course, I believe that I should have a grade in the range of high C to low B. I believe I have done good in class this semester, specifically in taking steps to improve in the second half. I have not been perfect, and do have some room for improvement in my coding and subjects such as binary arithmetic, but I believe that I have improved my understanding of the subjects we covered this semester, and have improved since my midterm assignment and reflection.

Proposed Grade: High C to Low B */