#include<stdio.h>
int main()
{
	int num1[2][2],num2[2][2],result[2][2],j,i,k;
	
	printf("--------matrix mul--------\n");



	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
				printf("enter elemnts:");
		scanf("%d",&num1[i][j]);
			
		}
	
	}
		for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		printf("%d\t",num1[i][j]);
			
		}
		printf("\n");
	
	}
	printf("--------matrix2--------\n");
		for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
				printf("enter elemnts:");
		scanf("%d",&num2[i][j]);
			
		}
	
	}
		for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		printf("%d\t",num2[i][j]);
			
		}
		printf("\n");
	
	}
	printf("\n--------multiplication--------\n");
			for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			result[i][j]=0;
			
			for(k=0;k<2;k++)
			{
			
		result[i][j]+=num1[i][k]*num2[k][j];	
		}
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		printf("%d\t",result[i][j]);	
		}
		printf("\n");
	}
	
	
	return 0;
}
