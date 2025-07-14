# COMPILER DESIGN BASICS
*COMPANY*: CODTECH IT SOLUTIONS  
*NAME*: SURAJ BHATT  
*INTERN ID*: CT04DH722  
*DOMAIN*: C LANGUAGE  
*DURATION*: 4 WEEKS( 29/6/25-29/7/25)  
*MENTOR*: NEELA SANTHOSH KUMAR  
DESCRIPTION OF THE PROJECT:  

The third task of the internship was focused on compiler design basics, specifically developing a simple lexical analyzer in C. The primary objective was to identify keywords, identifiers, and operators from a given C source code file. For this, I once again used Visual Studio Code as my development environment and compiled the program using the GCC compiler.

I started by creating a new C file named project_3.c. Before writing any code, I created a sample input.txt file that included a few lines of simple C code such as variable declarations, conditional statements, and arithmetic expressions. This file served as the input source that the lexical analyzer would read and analyze.

The program logic was designed to read the input file character by character using fgetc(). Whenever it encountered an alphanumeric character, it stored it in a temporary array to build a word. Once a non-alphanumeric character like a space or symbol was encountered, the word was checked against a list of predefined keywords such as int, float, if, else, etc. If a match was found, it was identified as a keyword; otherwise, it was labeled as an identifier.

For operator detection, I used a simple array of common C operators like +, -, *, /, =, and <. If the character matched any of these, it was printed as an operator. Although this was a basic implementation, it demonstrated the core functionality of lexical analysis.

During testing, I realized that compound operators like == or <= were being split into two individual operators. To keep the program simple and within the scope of the internship task, I focused only on single-character operators. Enhancing the program to handle multi-character tokens is something I plan to explore later.

I encountered a few bugs initially, especially related to buffer overflows and improper word boundary detection. These were fixed by carefully resetting the word buffer and validating each token before classification. I also added error handling for file operations to ensure the program gracefully handled missing or inaccessible input files.

After thoroughly testing the program with various input files, I finalized the code by adding inline comments and clear console output messages to make the tool user-friendly. I then pushed the project to a dedicated GitHub repository along with the sample input file and usage instructions in the README file.

Overall, this task provided a practical understanding of how lexical analyzers work and laid the groundwork for understanding more complex components of a compiler such as parsing and syntax analysis. It was fascinating to see how even a basic C program could replicate the initial stages of code compilation. This task reinforced my knowledge of string manipulation, character classification, and file handling in C while also introducing me to core concepts in compiler design.

# OUTPUT:  
<img width="1919" height="1000" alt="Image" src="https://github.com/user-attachments/assets/44b16e05-ae5e-415f-a09a-9e818c943a03" />
