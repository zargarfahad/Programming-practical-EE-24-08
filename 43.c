//demostrate strlen,strcpy,etc
int main() 
{
	char a1[4]="abc";
	char a2[3]="de";
	char a3[3]="fgh";
	char a4[4]="hello";
	printf("\n");
	int b=strlen(a2);
	strcat(a1,a2);
	printf("\n%s",a1);
	strcpy(a1,a3);
	printf("\n%s\n\n\n",a1);
	printf("%s ",strrev(a4));
	printf("%s ",a4);
}
