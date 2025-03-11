#include<stdio.h>
void main()
{
        int a[5];
	printf("Enter array values : ");
	for(int i=0;i<5;i++)
	{
	               	scanf("%d ",&a[i]);
	}
	for(int i=0;i<5;i++)
	{
		printf("\nArray values at index %d is :%d",i,a[i]);
	}
}

