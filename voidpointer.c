//void or generic pointer- points to any data type
#include<stdio.h>
int main(){
	void *p;//declaration
	int a = 5;
	p = &a;
	printf("%d\n",*(int*)p);//deferencing and type casting
	float b = 5.324;
	p = &b;
	printf("%f\n",*(float*)p);//dereferencing and type casting
	return 0;
}
