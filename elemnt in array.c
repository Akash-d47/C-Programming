#include<stdio.h>
int main()
{
	int a[20];
	int i, k, new, n;
	
	printf("Enter the numbers: ");
	scanf("%d", &n);
	
	printf("Enter the elements in the array: ");
	for(i=0; i<=n-1; i++){
		scanf("%d", &a[i]);
	}
	
	printf("Enter the position to insert an element: ");
	scanf("%d", &k);
	
	printf("Enter the new element to insert in array: ");
	scanf("%d", &new);
	
	for(i=n; i>=k; i--){
		a[i+1]=a[i];
	}
	a[k]=new;
	if(k>n)
	{
		p
		.rintf("Insertion: ");
	}
	printf("new array is: ");
	for(i=0; i<=n; i++)
	{
		printf("%d\n", a[i]);
	}
}