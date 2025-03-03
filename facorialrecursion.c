//write a program to find the factorial of the given integer using recursion
#include<stdio.h>
int fac(int);//function prototype
int main(){
	int a;
	scanf("%d",&a);
	int x = fac(a);
	printf("%d ",x);
	return 0;
}
fac(int a){
	if(a==0||a==1)
		return 1;
	else
		return a*fac(a-1);
}

/*
fac(3)
return 3*fac(2)
----------
fac(2)
return 2*fac(1)
--------
fac(1)
return 1
*/
