//Display series 122334444
int main()
{
  int i, j, n;
  printf ("enter number\n");
  scanf ("%d",&n);
  for(i=1;i<=n;i++)
  {
    for (j=1;j<=i;j++)
    {
	    printf("%d",i);
    }
    printf ("\n");
  }
}
