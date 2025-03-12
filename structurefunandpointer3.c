// c .passing address of the structure variable(pointer),dereferencing

struct student {
		int rno;
		float per;
		char name[10];
		
	}s1;//global is better to avoid warnings
#include<stdio.h>
#include<string.h>
int main(){
	struct student s1={503,85.23,"jyothi"};
	m1(&s1);//funtion call
	return 0;
	
}
m1(struct student *p){
	
printf("%d %f  %s",p->rno,p->per,p->name);
}
