//Program in C to find all the factors of a natural number
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("Factors of %d are : \n", n);
    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
            printf("%d \n", i);
    }
}
