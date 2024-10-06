#include<Stdio.h>
int main()
{
	int a[20], n, pos, i;
	printf("Enter the size of array: ");
	scanf("%d", &n);
	printf("Enter the %d elements: ",n);
	
	for(i=0; i<n;i++)
	{
		scanf("%d", &a[i]);
		
	}
	printf("Enter the position of element to be deleted: ");
	scanf("%d", &pos);
	if(pos>=n+1)
	{
		printf("Deletion is not possible!");
	}
	else
	{
		for(i=pos-1; i<n-1;i++)
	    a[i]=a[i+1];
		printf("Array after deleting element: ");
		for(i=0; i<n-1; i++)
		printf("%d\n", a[i]);
	}
	return 0;
}