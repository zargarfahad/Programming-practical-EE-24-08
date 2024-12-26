//DISPLAY SERIES 1234512345.... USING NESTING OF loops
int main()
{
    int a=1,n, i;

    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for(i=1; i<= n;++i)
    {
        printf("%d", a);
        a = (a%5) + 1;
    }
}
