# CSMC323 - Final Project Specifications
## Principles of Programming Languages
**Department of Computer Science**  
**College of Computer Studies**  
**Ateneo de Naga University**

---

## Project Overview

You will solve **five (5) programming problems** ranging from simple to challenging. Each programming problem will be solved using **four (4) programming languages**:
- C++
- Haskell
- Prolog
- Fortran

### Development Tool
**Online GDB** (www.onlinegdb.com) - Select the necessary language from the language dropdown menu in the upper right corner of the interface.

---

## Project Submission Format

This project is a **portfolio type**, meaning all source code will be consolidated into a single document.

### Submission Requirements:
1. **Google Docs File** with proper labeling to distinguish the language used and the problem it solves
2. **Structure Format**:
   ```
   Programming Language: <specify language here; capital letters please>
   
   PROBLEM #1 SOURCE CODE:
   <space source code here>
   
   PROBLEM #2 SOURCE CODE:
   <space source code here>
   
   :
   :
   
   PROBLEM #5 SOURCE CODE:
   <space source code here>
   ```

3. **Repeat the same structure for each succeeding programming language**

### Formatting Requirements:
- **Font**: COURIER NEW, size 11
- **Labels**: ARIAL, size 11
- **Comments**: Provide proper comments for readability

### File Naming Convention:
```
<surname>_<given name>_CSMC323_FinalProject
```
Replace `<surname>` with your surname (removing < and > symbols)  
Replace `<given name>` with your given name (removing < and > symbols)

---

## Submission Procedures

1. **Create Google Drive Folder**
   - Create a Google Drive folder in your GBOX
   - Rename the folder to "CSMC323 - Final Project"

2. **Set Share Settings**
   - Edit the share settings to be set to **"ANYONE WITH THE LINK"**
   - General access role: **"EDITOR"**
   - Ensure the **Google Docs file also has the same share settings**

3. **Click "DONE"** on the share settings

4. **Place Google Docs File**
   - Inside the created Google Drive folder
   - Ensure it is **NOT A SHORTCUT** of the file
   - Ensure the file is accessible to your teacher

5. **Copy the Google Drive Folder Link**
   - Right-click on the Google Drive folder
   - Select **"SHARE"** → **"COPY LINK"**

6. **Submit on Portal**
   - Go to the submission link (FINAL PROJECT)
   - Click **"START ASSIGNMENT"**
   - Add the link you just copied to the textbox that will appear
   - Click the **"SUBMIT ASSIGNMENT"** button

---

## Programming Problems

### **PROBLEM #1: Lulu's Weekly Allowance**

#### Problem Description
Every Sunday night, Lulu and her mom would sit down together to plan out school-related activities and errands. This includes Lulu's weekly allowance. To make the allocation for fun, Lulu's mom would randomly pick ten numbers. The seventh number in the list determines the multiplier that will be used to compute Lulu's allowance. Here base allowance is $2.75.

Compute Lulu's allowance for next week!

#### Input Format
Input consists of ten integers randomly selected by Lulu's mom. The values of the integers are between 1 and 100.

#### Output Format
Identify the seventh integer and compute for Lulu's allowance for the week. The output should be in the following format:

**The multiplier is <seventh_number>! Lulu's allowance for the week is $ <weekly_allowance>!**

**Note**: Replace `<seventh_number>` and `<weekly_allowance>` with their actual values. `<weekly_allowance>` should be rounded to two decimal places. There should be a space between the dollar symbol and the first digit of the allowance.

**Example**: The multiplier is 1! Lulu's allowance for the week is $ 2.75!

| Sample Input | Sample Output |
|---|---|
| 1 2 3 4 5 6 3 4 3 5 | The multiplier is 3! Lulu's allowance is $ 8.25! |

---

### **PROBLEM #2: Count Upper**

#### Problem Description
Count how many uppercase letters are in the input.

#### Input Format
Input begins with an integer **N** indicating how many character sequences are in the input. Succeeding lines begin with an integer **t** indicating how many characters **ch** follow.

#### Output Format
For each input, output how many uppercase letters are found.

#### Constraints
- 1 ≤ N ≤ 100
- 1 ≤ t ≤ 100

**Note**: The program should iterate through the 2nd input of each line using the 1st input of that same line.

| Sample Input | Sample Output |
|---|---|
| 2 | 0 |
| 3 abc | 1 |
| 5 Abcde | |

---

### **PROBLEM #3: Average**

#### Problem Description
Given three test scores, compute the average

#### Input Format
Input consists of three integers whose values are from 1 to 20, inclusive.

#### Output Format
Output the average formatted with two decimal places.

| Sample Input | Sample Output |
|---|---|
| 18 15 16 | 16.33 |

---

### **PROBLEM #4: Simple Sort**

#### Problem Description
Alice needs help in sorting three numbers in ascending order. Help her!

#### Input Format
Input consists of three integers whose values are between -100 and 100, inclusive. Each integer is separated by a single space.

#### Output Format
Print out the three numbers sorted in ascending order. In the next line, output the numbers in the order they were read. Separate the numbers in each line with single spaces.

| Sample Input | Sample Output |
|---|---|
| 3 16 -27 | -27 3 16 |
| | 3 16 -27 |

---

### **PROBLEM #5: Even from End**

#### Problem Description
Given a list of integers, find and display all even numbers from the end of the list.

#### Input Format
Each line of input begins with an integer **N**, indicating the number of integer **n** that follow, which comprises a list.

#### Output Format
All even numbers from the end of the list, each separated by a single space. Separate output for each test case with a newline character.

#### Constraints
- 2 ≤ N ≤ 100
- -1000 ≤ n ≤ 1000

| Sample Input | Sample Output |
|---|---|
| 5 10 25 12 4 1 | 4 12 10 |
| 3 16 28 100 | 100 28 16 |

---

## Project Due Date

**Deadline: MAY 15, 2026 (9:00 PM)**

---

## Important Notes

### Submission Checklist:
- ✓ Google Drive folder created and properly named
- ✓ Share settings set to "ANYONE WITH THE LINK" with "EDITOR" role
- ✓ Google Docs file inside the folder (not a shortcut)
- ✓ File named correctly: `<surname>_<given name>_CSMC323_FinalProject`
- ✓ All 5 problems solved in all 4 languages (20 solutions total)
- ✓ Proper formatting (COURIER NEW size 11 for code, ARIAL size 11 for labels)
- ✓ Comments provided for all code
- ✓ All code properly organized in the Google Docs file
- ✓ Link submitted via the portal

### Important Final Note:
**DO NOT DELETE OR REMOVE ACCESS TO THE FILE/FOLDER** until your final grade has been reflected in your MyAdnu account. Thank you.

---

## Problem Implementation Summary

| Problem | Language | Status |
|---------|----------|--------|
| #1: Lulu's Weekly Allowance | C++, Haskell, Prolog, Fortran | Implemented |
| #2: Count Upper | C++, Haskell, Prolog, Fortran | Implemented |
| #3: Average | C++, Haskell, Prolog, Fortran | Implemented |
| #4: Simple Sort | C++, Haskell, Prolog, Fortran | Implemented |
| #5: Even from End | C++, Haskell, Prolog, Fortran | Implemented |

---

*Project Specifications for CSMC323 - Principles of Programming Languages*  
*Ateneo de Naga University - College of Computer Studies*
