#include <stdio.h>

int main() {
    int grades[2][5];      // 2 students, 5 subjects
    float average;
    int i, j;

    // Assigning grades
    grades[0][0] = 80;
    grades[0][1] = 70;
    grades[0][2] = 65;
    grades[0][3] = 89;
    grades[0][4] = 90;

    grades[1][0] = 85;
    grades[1][1] = 80;
    grades[1][2] = 80;
    grades[1][3] = 82;
    grades[1][4] = 87;

    // Correct loop using the actual dimensions
    for (i = 0; i < 2; i++) {         // Iterate over students
        average = 0;

        for (j = 0; j < 5; j++) {     // Iterate over subjects
            average += grades[i][j];
        }

        // Compute the average correctly
        average /= 5;  // Divide by the number of subjects

        printf("The average marks obtained in subject %d is: %.2f\n", i, average);
    }

    printf("%d\n", sizeof(grades[0]) / 4);
    return 0;
}
