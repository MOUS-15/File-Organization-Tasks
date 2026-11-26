
# Task 4 (Lab 1) - Persons File Management & Age Analysis

## Problem Description
This task focuses on writing structured data to a file, reading it back into a dynamic data structure (`std::vector`), and analyzing the records to find extreme values (youngest and oldest persons).

## Requirements
1. **Input & File Writing:**
   - Prompt the user to enter the number of persons they want to add.
   - For each person, take their **name** (`string`) and **age** (`integer`) as input.
   - Save all entered records into a file.
2. **File Reading & Processing:**
   - Read all person records from the file created in Step 1.
   - Store the loaded data in a `vector` of persons (e.g., using a `struct` or `class`).
   - Identify the **youngest** and **oldest** persons from the loaded records.
   - Save the results (the youngest and oldest persons) into a separate results file (e.g., `results.txt`).

## Expected Output
- **Data File (e.g., `persons.txt`):** Contains the list of all persons with their names and ages.
  ```text
  Ahmed 22
  Sara 19
  Omar 25
