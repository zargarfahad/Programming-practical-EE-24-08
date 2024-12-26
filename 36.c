// integer array
int main() 
{
	int a[10];
	int i;
	printf("input elements in array:\n");
	for(i=0;i<10;i++)
	{
		printf("element: ",i);
		scanf("%d", &a[i]);
	}
	printf("elements of array are; ");
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
	print("\n");
}
