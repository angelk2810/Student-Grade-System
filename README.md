# Student Grade Management System

## Description

The Student Grade Management System is a simple C program that allows users to input student details, calculate their total marks, percentage, and assign grades based on predefined criteria. The program then displays all student records in a structured format.

## Features

- Accepts multiple student records.
- Computes total marks and percentage for each student.
- Assigns grades based on percentage.
- Displays the student records in a tabular format.

## Grading Criteria

| Percentage | Grade |
| ---------- | ----- |
| 90 - 100   | A     |
| 75 - 89    | B     |
| 60 - 74    | C     |
| 40 - 59    | D     |
| Below 40   | F     |


## Input Format

- The user is prompted to enter the number of students.
- For each student, the following details are entered:
  - Name
  - Roll Number
  - Marks for 3 subjects

## Output Format

- Displays a structured table containing:
  - Student Name
  - Roll Number
  - Total Marks
  - Percentage
  - Assigned Grade

## Example Run

```
Enter number of students: 2

Enter details for student 1:
Name: Alice
Roll No: 101
Enter marks for subject 1: 85
Enter marks for subject 2: 90
Enter marks for subject 3: 88

Enter details for student 2:
Name: Bob
Roll No: 102
Enter marks for subject 1: 70
Enter marks for subject 2: 75
Enter marks for subject 3: 72

Student Records:
---------------------------------------------------------
Name       Roll No    Total      Percentage Grade     
---------------------------------------------------------
Alice      101       263.00     87.67      B        
Bob        102       217.00     72.33      C        
```



