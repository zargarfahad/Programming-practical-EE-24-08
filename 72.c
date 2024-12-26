//Program in C to read contents of a text file

#include <stdio.h>
int main() {
    char *filename = "file.txt";
    FILE *fp = fopen("file.txt", "r");
    if (fp == NULL) {
        printf("Error: could not open file %s", filename);
        return 1;
    }
    // read one character at a time and
    // display it to the output
    char ch;
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }
    // close the file
    fclose(fp);
    return 0;
}