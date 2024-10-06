#include<stdio.h>
void main()
{
	int a[10], size,i;
	printf("Enter the size of array: ");
	scanf("%d", &size);
	printf("Enter the elements in array: ");
	for(i=0; i<size; i++)
	{
		scanf("%d", &a[i]);
	}
	int max=a[0];
	for(i=0; i<size; i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf("Maximum value in array is %d", max);
	
}
 