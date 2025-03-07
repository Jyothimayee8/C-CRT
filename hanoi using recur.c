//program to solve the tower of hanoi puzzle

#include<stdio.h>
void toh(int,char,char,char);
int main(){
	int n;
	scanf("%d",&n);
	toh(n,'a','b','c');//calling function
	return 0;
}

void toh(int n,char a,char b,char c){
	if(n>0){
		toh(n-1,a,c,b);//recursive call 1
		printf("%c to %c\n",a,c);
		toh(n-1,b,a,c);//recursive call 2
	}
}
