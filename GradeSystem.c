#include <stdio.h>

#define MAX_STUDENTS 100

// Structure to store student details
struct Student {
    char name[50];
    int roll_no;
    float marks[3];  // Storing marks for 3 subjects
    float total;
    float percentage;
    char grade;
};

// Function to calculate grade
char calculateGrade(float percentage) {
    if (percentage >= 90) return 'A';
    else if (percentage >= 75) return 'B';
    else if (percentage >= 60) return 'C';
    else if (percentage >= 40) return 'D';
    else return 'F';
}

int main() {
    struct Student students[MAX_STUDENTS];
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Input student details
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll No: ");
        scanf("%d", &students[i].roll_no);
        
        students[i].total = 0;
        for (int j = 0; j < 3; j++) {
            printf("Enter marks for subject %d: ", j + 1);
            scanf("%f", &students[i].marks[j]);
            students[i].total += students[i].marks[j];
        }
        
        students[i].percentage = students[i].total / 3;
        students[i].grade = calculateGrade(students[i].percentage);
    }
    
    // Display student records
    printf("\nStudent Records:\n");
    printf("---------------------------------------------------------\n");
    printf("%-10s %-10s %-10s %-10s %-10s\n", "Name", "Roll No", "Total", "Percentage", "Grade");
    printf("---------------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%-10s %-10d %-10.2f %-10.2f %-10c\n", students[i].name, students[i].roll_no, students[i].total, students[i].percentage, students[i].grade);
    }
    
    return 0;
}
