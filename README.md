# Student Grades Management System

A C console program (`sc1.c`) that reads each student's roll number, name, and marks in three subjects. It prints the total, average, and a letter grade for each student.

## Build and run

```sh
gcc sc1.c -o student-grades
./student-grades
```

On Windows, run `student-grades.exe`.

## Grade thresholds

- 90 and above: A+
- 80–89.99: A
- 70–79.99: B
- 60–69.99: C
- 40–59.99: D
- Below 40: F (Fail)

## Notes

Storage is limited to 100 students, but the entered student count is not checked against that limit. Mark ranges and input errors are also not validated.
