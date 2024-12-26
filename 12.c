//Program to display 'Hello' when user enters 1, 'Bonjour' when user enters 2, 'Ciao' when user enters 3. 
#include <stdio.h>
int main() {
   int x;
   printf("Enter 1 for Hello, 2 for Salam, 3 for Hi: ");
   scanf("%d", &x);
   switch (x)
   {
   case 1:
    printf("Hello\n");
    break;
    case 2:
    printf("Salam\n");
    break;
    case 3:
    printf("Hi\n");
    break;
   default:
    printf("Incorrect option\n");
    break;
   }
   return 0;
}