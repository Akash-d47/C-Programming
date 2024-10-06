#include<stdio.h>
void main()
{
	int a[10], i,temp,  j, size;
	printf("Enter size of the array: ");
	scanf("%d", &size);
	printf("Enter array elements: ");
	for(i=0; i<size; i++)
	{
		scanf("%d", &a[i]);
	}
	for(i=0; i<size; i++)
	{
		for(j=i+1; j<size; j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("Array elements: ");
	for(i=0; i<size; i++)
	{
		printf("%d", a[i]);
	}
}