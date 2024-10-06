#include<stdio.h>
void main()
{
	int a[10], i, pos, size, item;
	printf("Enter size of array: ");
	scanf("%d", &size);
	printf("Enter elements of array: ");
	for(i=0; i<size; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Enter the position of element to change: ");
	scanf("%d", &pos);
	
	printf("Enter new element: ");
	scanf("%d", &item);
	
	for(i=size; i>=pos; i--)
	{
		a[i]=a[i-1];
	}
	a[pos]=item;
	size++;
	printf("New array:");
	for(i=0; i<size; i++)
	{
		printf("%d ", a[i]);
	}
	
}