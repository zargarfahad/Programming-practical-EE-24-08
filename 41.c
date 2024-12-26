//display length of string 
int main() 
{
	char str[100];
	int i;
	printf("enter string");
	scanf("%s", str);
	for(i=0;str[1]!='\0';++i);
	printf("lenth of str is %d",i);
}
