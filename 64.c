//Program in C to demonstrate use of pointers

#include<stdio.h>
int main() {
    int *p, c;
    c = 5;
    p = &c;
    printf("%d\n", *p); //output = 5
    return 0;
}