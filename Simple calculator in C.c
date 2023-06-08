#include<stdio.h>
int main(){
	int num;
	printf("enter number\n");
	scanf("%d",&num);
	switch(num){
		case 7:
			printf("value is 7");
			break;
			case 8:
				printf("value is 8");
				break;
				case 9:
					printf("value is 9");
					break;
					case 11:
						pprintf("value is 11");
						break;
						default:
							printf("out of range");
							break;
	}
	return 0;
}
