# Student Record Management System – C++

## Overview
This is a console-based Student Record Management System developed in C++. It allows users to insert, search, update, delete, and view student academic records. The program also shows the student with the highest and lowest total marks. All data is stored in memory (RAM) only — file handling is **not** implemented in this version.

## Features
1. **Insert Record**  
   - Takes Registration Number (unique), Name, Section, and Marks in Programming Fundamentals, Applied Physics, ICT, and English.
   - Automatically calculates total marks, percentage, and assigns grade.

2. **Search Record**  
   - Search for a student using their Registration Number and display full details.

3. **Update Record**  
   - Allows modification of an existing student’s data by re-entering the new details.

4. **Delete Record**  
   - Removes a student record based on their Registration Number.

5. **Show Records**  
   - Displays all student records currently stored in memory.

6. **Highest Marks**  
   - Shows the student with the highest total marks.

7. **Lowest Marks**  
   - Shows the student with the lowest total marks.

8. **Exit**  
   - Terminates the program.

## Data Structure
Student records are stored using a structure (`struct student`) and an array of fixed size (25 students max).

Each record stores:
- Name  
- Registration Number  
- Section  
- Marks in:
  - Programming Fundamentals
  - Applied Physics
  - ICT
  - English
- Total Obtained Marks  
- Percentage  
- Grade (A+, A, B, C, D, F)

## Grade Calculation
- A+ : 80% and above  
- A  : 70% – 79%  
- B  : 60% – 69%  
- C  : 50% – 59%  
- D  : 40% – 49%  
- F  : Below 40%

## Important Notes
- **No file handling is implemented** — all data is lost when the program exits.
- Uses `conio.h` and `getch()` (Windows-specific headers).
- Uses `goto` statement for menu navigation.
- You can manually extend this program to support file handling by reading/writing to a file like `rooms.txt` or `students.txt`.

## How to Run
1. Copy the entire code into a C++ IDE (Code::Blocks, Dev C++, Visual Studio) or an online compiler.
2. Compile and run.
3. Use the numeric menu to perform operations.

## Future Improvements
- Add file handling to save/load student records using text files.
- Replace `goto` with loops for better program flow.
- Add input validation to avoid invalid entries.

