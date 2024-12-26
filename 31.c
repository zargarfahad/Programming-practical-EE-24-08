//Diplsay 2 star pyramid
int main() 
{
   int i, j, rows;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i)
    {
      for (j = 1; j <= i+1; ++j)
	   {
         printf("*");
      }
      printf("\n");
   }
}
