#include<stdio.h>
void main()
{
	int a[10],n,i;
	printf("Enter the size of array: ");
	scanf("%d", &n);
	
	printf("Enter the elements in array: ");
	for(i=0; i<=n; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Reverse array: ");
	for(i=n; i>=0; i--)
	{
		printf("%d", a[i]);
	}
}