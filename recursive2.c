//program to print the numbers from high to low  using recursion
#include<stdio.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	inc(a,b);
	return 0;
}
inc(int a,int b){
	if(a>=b){
		printf("%d ",a);
		a--;
		inc(a,b);//recursive function call
	}
}

