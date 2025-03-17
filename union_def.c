union student
{
	char name[10];
	int rno;
	float per;
};//1
#include<stdio.h>
int main(){
	union student s1;//2
	printf("%d\n",sizeof(s1));
	return 0;
}
//12 instead of 10 due to padding
