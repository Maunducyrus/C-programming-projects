#include<stdio.h>
int main(){
	int num=1;
	printf("numbers from 1 to 20\n");
	//start do while loop
	do{
		printf("%d\n",num);
		++num;
	}
	while (num<=20);
	return 0;
}
