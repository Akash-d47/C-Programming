#include<stdio.h>
void main()
{
	int n;
	printf("Enter number of Integers: ");
	scanf("%d", &n);
	
	int a[20];
	printf("Enter %d integers: ", n);
	for(int i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<(n-1); j++)
		{
			if(a[j]>a[j+1])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("Sorted array: ");
	for(int i=0; i<n; i++)
	{
		printf("%d\n", a[i]);
	}
}