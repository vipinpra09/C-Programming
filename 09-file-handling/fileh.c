1. What is File Handling in C?

File handling in C allows you to store data permanently on disk, so it can be accessed even after the program ends. Unlike normal variables (which are temporary), files can save text or binary data for later use.

Files types:

Text files → .txt (human-readable)

Binary files → .bin (not human-readable)

Main operations you can perform on files:

Create a file

Open a file

Read from a file

Write to a file

Close a file

2. File Handling Functions in C

Here’s a tree-style diagram of common file handling functions with their purposes:

File Handling Functions in C
│
├── fopen()       : Open a file in a specific mode (r, w, a, rb, wb, etc.)
├── fclose()      : Close an opened file
├── fprintf()     : Write formatted data to a file (like printf)
├── fscanf()      : Read formatted data from a file (like scanf)
├── fgetc()       : Read a single character from a file
├── fputc()       : Write a single character to a file
├── fread()       : Read binary data from a file
├── fwrite()      : Write binary data to a file
├── fseek()       : Move the file pointer to a specific location
├── ftell()       : Get the current position of the file pointer
└── rewind()      : Move the file pointer back to the beginning

3. Example of File Handling in C (Text File)

Here’s a simple program to write and read from a file:

#include <stdio.h>

int main() {
    FILE *fp;  // Declare a file pointer

    // 1. Open file in write mode
    fp = fopen("example.txt", "w");  
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // 2. Write data to file
    fprintf(fp, "Hello, World!\n");
    fprintf(fp, "File handling in C is easy.\n");

    // 3. Close the file
    fclose(fp);

    // 4. Open file in read mode
    fp = fopen("example.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // 5. Read and display file content
    char ch;
    while ((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }

    // 6. Close the file
    fclose(fp);

    return 0;
}


Output:

Hello, World!
File handling in C is easy.


✅ Key Notes:

Always check if the file opened successfully (if(fp == NULL)).

Always close the file with fclose() after you finish operations.

fgetc() and fputc() are useful for character-level reading/writing.

fprintf() and fscanf() are better for formatted text.
