---

### 2. Task 05 (Lab 2)[cite: 4]

```markdown
# 📝 Task 05: Delimited Student Records

## 📌 Problem Statement
Write a program that stores student records (**Name**, **ID**, and **Grade**) for any number of students in a file named **`students.txt`**. The program continues adding records as long as the user enters `'y'` and stops when `'n'` is entered. Each record in the file must be delimited by `'$'`.

---

## 📥 Input Details
The program prompts the user for the following inputs in a loop:
- **Name:** `char[20]` (e.g., `Mohamed Ali`)
- **ID:** `int` (e.g., `33`)
- **Grade:** `float` (e.g., `2`)
- **Continue? (`y`/`n`):** Character to add more records or stop

---

## 📤 Output File Structure
The program creates a text file named `students.txt` with the format `Name, ID, Grade, delim`:

```text
Mohamed Ali, 33, 2 $
