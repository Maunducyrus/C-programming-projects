#include <stdio.h>

int main(){
	int x1, x2, x3, x4, x5, x6, x7, x8, x;
	int y1, y2, y3, y4, y5, y6, y7, y8, y;
	int a1, a2, a3, a4, a5, a6, a7, a8;
	
	int a, b;
	
	int b1, b2, b3, b4;
	
	printf("Enter the value of x in the first equation\n");
	scanf("%d", &x1);
	
	printf("Enter the value of y in the first equation\n");
	scanf("%d", &y1);
	
	printf("Enter the answer in the first equation\n");
	scanf("%d", &a1);
	
	printf("\nEnter the value of x in the second equation\n");
	scanf("%d", &x2);
	
	printf("Enter the value of y in the second equation\n");
	scanf("%d", &y2);
	
	printf("Enter the answer in the second equation\n");
	scanf("%d", &a2);
	
	for(a=1; a<=100; a++)
	{
		if(a%x1==0 && a%x2==0)
		{
			break;
		}
	}
	
	b1 = a/x1;
	b2 = a/ x2;
	
	x3 = b1 * x1;
	y3 = b1 * y1;
	a3 = b1 * a1;
	
	x4 = b2 * x2;
	y4 = b2 * y2;
	a4 = b2 * a2;
	
	x5 = x4 - x3;
	y5 = y4 - y3;
	a5 = a4 - a3;
	
	y = a5/ y5;
	
	for(b=1; b<=100; b++)
	{
		if(b%y1==0 && b%y2==0)
		{
			break;
		}
	}
	
	b3 = b/y1;
	b4 = b/y2;
	
	x6 = b3 * x1;
	y6 = b3 * y1;
	a6 = b3 * a1;
	
	x7 = b4 * x2;
	y7 = b4 * y2;
	a7 = b4 * a2;
	
	x8 = x7 - x6;
	y8 = y7 - y6;
	a8 = a7 - a6;
	
	x = a8/x8;
	
    printf("\nThe value of x is %d\n", x);
    printf("\nThe value of y is %d\n", y);

	return 0;
}

