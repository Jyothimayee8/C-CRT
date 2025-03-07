//program to find the gcd of 2 numbers
//using normal gcd

/* 


#include<stdio.h>
void main(){
	int a,b;
	scanf("%d%d",&a,&b);
	while(a!=b){
		if(a>b)
		{
			a = a-b; //a is biggest
		}
		else {
			b= b-a;//b is biggest
		}
		
	}
	printf("%d",a);
}


*/

//using recursion

#include<stdio.h>
int gcd(int a ,int b);//function prototype
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	int x = gcd(a,b);
	printf("%d",x);
	return 0;
}
int gcd(int a,int b){
	if(a>b){
		 return gcd(a-b,b); //recursive call 1
	}
	else {
	return gcd(a,b-a); //recursive call 2
}
}

/* 2!=5
	2<5
	5-2 = 3
*/
