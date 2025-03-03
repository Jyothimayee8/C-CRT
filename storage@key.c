#include<stdio.h>
extern int d;//warning after the main
int d;//without keyword before the main the variable is called extern variable
int main(){
	auto int a;   
	static int b;
	register int c;
	printf(" %d %d %d %d ",a,b,c,d);
	return 0;
} 
