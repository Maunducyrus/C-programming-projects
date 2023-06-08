//using a function to execute a code to check maximum number 
#include<stdio.h>
int max (int x, int y){
	if(x>y)
	return x;
	else
	return y;
}
//checking the maximum between 2 numbers 'a' and 'b'
int main(void){
	int a=10;
	int b=20;
	//calling above function tp find max of 'a' and 'b'
	int m=max(a,b);
	printf("max is\t%d",m);
	return 0;
}
