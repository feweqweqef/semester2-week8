#include <stdio.h>
#include "student.h"

int main() {
    Student student = {
        .name = "John Smith",
        .id = 12345,
        .marks = {75.0, 68.5, 81.0}
    };

    printf("Original student record:\n");
    display_student(student);

    float average = calculate_average(student);
    printf("\nThe average mark is: %.1f\n", average);

    update_name(&student, "Jane Smith");
    update_mark(&student, 2, 92.5);

    printf("\nAfter updates:\n");
    display_student(student);

    return 0;
}