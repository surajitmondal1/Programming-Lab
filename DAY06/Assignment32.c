#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter the number: ");
	scanf("%d",&n);
	for (i=0;i<=n;i++)
	{
		sum = sum + i;
		}
		printf("The sum of the no. is %d\n", sum);
		return 0;
}
