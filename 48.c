// transpose
int main() {
    int a[10][10], i, j, m, n;
    printf("Enter the number of rows and columns of the matrix respectively: ");
    scanf("%d%d", &m, &n);
    printf("Enter the elements of the matrix row by row:\n");
    for (i = 0; i < m; i++)
	 { 
        for (j = 0; j < n; j++) 
		{   
            scanf("%d", &a[i][j]);
        }    
    }
    printf("The matrix is:\n");
    for (i = 0; i < m; i++)
	 {
        for (j = 0; j < n; j++)
		 {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
 printf("The transpose of the matrix is: \n");
    for (i = 0; i <= n - 1; i++) {
        for (j = 0; j <= m-1; j++) 
            printf("%d ", a[i][j]);
}
    printf("\n");
}
