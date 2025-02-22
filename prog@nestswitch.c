//program of checking even or odd using nested switch case
#include<stdio.h>
int main()
{
	int n ,y;
	scanf("%d",&n);
	switch(n)
	{
		case 0:printf("even");break;
		case 1:printf("odd");break;
		default : y = n%2;
		switch(y){
			case 0:printf("even");break;
			case 1:printf("odd");break;
		}
	}
	return 0;
}
