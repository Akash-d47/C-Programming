#include<stdio.h>
int main()
{
	int a[10], size,i;
	printf("Enter the size of array: ");
	scanf("%d", &size);
	printf("Enter the elements in array: ");
	for(i=0; i<size; i++)
	{
		scanf("%d", &a[i]);
	}
	int min=a[0];
	for(i=0; i<size; i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	printf("Minimum value in array is %d", min);
	
}
 