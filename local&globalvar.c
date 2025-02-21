#include<stdio.h>
int main(){
	int a = 10;//global scope
	{
		int a = 20;//local scope
		printf("%d\n",a)
	}
	printf("%d\n",a);
	return 0;
}
