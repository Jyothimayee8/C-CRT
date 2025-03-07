//NULL pointer
//pointer to function = pointer pointing to a function(function aslo contains address)
 
#include<stdio.h>
int mul(int,int);//function prototype
int main(){
	int x,y;
	scanf("%d%d",&x,&y);
	int (*p)();//1 pointer points to function
	p = mul;//if mul() it stores the return value,for address remove ()
	printf("%d\n",p(x,y));//function call of mul using pointer p-3
	printf("%d\n",mul(x,y));//direct call (function call of mul)
	return 0;
}
int mul(int x,int y){
	return x*y;
}
