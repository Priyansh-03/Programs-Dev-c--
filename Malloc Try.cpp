#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a,i;
	printf("before-->%d  ",sizeof(a));
	a= (int *)malloc(100*sizeof(int));
	printf("after-->%d",sizeof(a));
	
	for(i=0;i<6;i++)
	{
		printf("\nEnter value-->",a[i]);
		scanf("%d",&a[i]);
	}
	for(i=0;i<6;i++)
	{
		printf("\nyou entered-->%d",a[i]);
	}
	
	for(i=0;i<6;i++)
	{
		printf("\nsize-->%d",sizeof(a[i]));
	}
	return 0;
}
