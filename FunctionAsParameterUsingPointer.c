//PASSING A FUNCTION AS A PARAMETER USING POINTER

void jyo(void (*f)());//pointer that points to a funtion
void s1();//function prototype
#include<stdio.h>
int main(){
	jyo(&s1);//function call of jyo with s1 function address
	return 0;
}

void jyo(void (*f)()){
	printf("RISE ");
	f();//calling funtion of f = s1
}
void s1(){
	printf("college");
}
