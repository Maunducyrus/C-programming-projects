#include <stdio.h>
student(int x){
	if (x >= 50){
		printf("pass");
	}
	else
	{
		printf("fail");
	}
}

int main(){
	int marks;
	printf("enter student marks");
	scantf("%d", &marks);
student(marks);
	return 0;
}
