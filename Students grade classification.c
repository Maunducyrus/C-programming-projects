#include<stdio.h>
int main(){
	int marks;
	printf("enter marks\n");
	scanf("%d",&marks);
	if ((marks>=0) && (marks<=39))
	{
			printf("grade if FAIL\n");
	}

	else if((marks>=40) && (marks<=49))
	{
			printf("grade is D\n");
	}

	else if((marks>=50) && (marks<=59))
	{
			printf("grade is C\n");
	}

	else if((marks>=60) && (marks<=69))
	{
			printf("grade is B\n");
	}

	else if((marks>=70) && (marks<=100))
	{
			printf("grade if A\n");
	}

	else
	{
		printf("invalid");
	}
	return 0;
}
